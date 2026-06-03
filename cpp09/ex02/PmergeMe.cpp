/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 10:05:20 by kkoujan           #+#    #+#             */
/*   Updated: 2026/06/03 10:39:04 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}
PmergeMe::PmergeMe(const PmergeMe& other) {
    *this = other;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
    if (this != &other) { 
        this->_vec = other._vec;
        this->_deq = other._deq;
    }
    return *this;
}
// void PmergeMe::parseInput(int argc, char** argv) {
//   std::cout << "pass" ;
// }

std::vector<size_t> PmergeMe::generateJacobsthalVector(size_t n) {
    std::vector<size_t> jacob;
    jacob.push_back(0);
    jacob.push_back(1);

    while (jacob.back() < n || jacob.size() < 5)
    {
        jacob.push_back(jacob.back() + (2 * jacob[jacob.size() - 2]));
    }
    return jacob;
}

std::deque<size_t> PmergeMe::generateJacobsthalDeque(size_t n) {
    std::deque<size_t> jacob;
    jacob.push_back(0);
    jacob.push_back(1);

    while (jacob.back() < n || jacob.size() < 5)
    {
        jacob.push_back(jacob.back() + (2 * jacob[jacob.size() - 2]));
    }
    return jacob;
}

std::vector<int> PmergeMe::insertVector(std::vector<std::pair<int,int> > &pair) {
    std::vector<int> mainChain;
    if (pair.empty()) return mainChain;
    std::vector<int> pending;
    size_t i = 0;
    while (i < pair.size())
    {
        if (i == 0)
            mainChain.push_back(pair[i].second);
        else
            pending.push_back(pair[i].second);   
        mainChain.push_back(pair[i].first);
        i++;
    }
    std::vector<size_t> jacob = this->generateJacobsthalVector(pending.size());
    size_t jacob_idx = 2;
    size_t limit = jacob[jacob_idx];
    if (limit >= pending.size())
        limit = pending.size();
    size_t edge = 0;
    size_t tmp = limit;
    while (jacob_idx < jacob.size())
    {
        while (tmp > edge)
        {
            int partner = pair[tmp].first;
            std::vector<int>::iterator upper_bound = mainChain.end();
            std::vector<int>::iterator it = mainChain.begin();
            while ( it != mainChain.end()) {
                if (*it == partner) {
                    upper_bound = it;
                    break;
                }
                ++it;
            }
            std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), upper_bound, pending[tmp - 1]);
            mainChain.insert(pos, pending[tmp - 1]);
           tmp--;
        }
        edge = limit;
        if (edge >= pending.size())
            break;
        jacob_idx++;
       if (jacob_idx < jacob.size())
            limit = jacob[jacob_idx];
        if (limit >= pending.size())
            limit = pending.size();
        tmp = limit;
    }      
    return mainChain;
}

std::vector<std::pair<int,int> > PmergeMe::sortVectorPair(std::vector<std::pair<int,int> > &pair) {
    if (pair.size() <= 1) 
        return pair;

    std::vector<int> winners;
    size_t i = 0;
    while( i < pair.size()) 
    {
        winners.push_back(pair[i].first);
        i++;
    }

    this->sortVector(winners);

    std::vector<std::pair<int,int> > sortedPairs;
    std::vector<bool> used(pair.size(), false);
    i = 0;
    size_t j = 0;
    while (i < winners.size())
    {
        while (j < pair.size())
        {
            if (!used[j] && winners[i] == pair[j].first)
            {
                sortedPairs.push_back(pair[j]);
                used[j] = true;
                break;
            }
            j++;
        }
        j = 0;
        i++;
    }
    return sortedPairs;
}
void PmergeMe::sortVector(std::vector<int>& arr) {
    if (arr.size() <= 1) return;
    int end = -1;
    bool hasEnd = false;
    size_t i = 0;
    std::vector<std::pair<int,int> > p;
    
    if (arr.size() % 2 != 0) {
        end = arr.back();
        arr.pop_back();
        hasEnd = true;
    }
    while (i < arr.size())
    {
        if (arr[i] > arr[i+1]) {
            p.push_back(std::make_pair(arr[i], arr[i+1]));
        } 
        else {
            p.push_back(std::make_pair(arr[i+1], arr[i]));
        }        
        i = i + 2;
    }
    p = this->sortVectorPair(p);
    arr = this->insertVector(p) ;

    if (hasEnd) {
        std::vector<int>::iterator pos = std::lower_bound(arr.begin(), arr.end(), end);
        arr.insert(pos, end);
    }
}

// ---- Deque Implementation ----

std::deque<int> PmergeMe::insertDeque(std::deque<std::pair<int,int> > &pair) {
   std::deque<int> mainChain;
    if (pair.empty()) return mainChain;
   std::deque<int> pending;
   size_t i = 1;
   mainChain.push_back(pair[0].second);
   mainChain.push_back(pair[0].first);
   while (i < pair.size())
   {
        mainChain.push_back(pair[i].first);
        pending.push_back(pair[i].second);
        i++;
   }
   std::deque<size_t> jacob = this->generateJacobsthalDeque(pending.size());
   size_t jacob_idx = 2;
   size_t limit = jacob[jacob_idx];
   if (limit >= pending.size())
        limit = pending.size();
   size_t tmp = limit;
   size_t edge = 0;
   while (jacob_idx < jacob.size())
   {
        while (tmp > edge)
        {
            int target = pending[tmp - 1];
            int w_pair = pair[tmp].first;
            std::deque<int>::iterator it = mainChain.begin();
            while (it != mainChain.end())
            {
                if (*it == w_pair)
                    break;
                ++it;
            }
            std::deque<int>::iterator pos = std::lower_bound(mainChain.begin(), it, target);
            mainChain.insert(pos, target);
            tmp--;
        }
        edge = limit;
        if (edge >= pending.size())
            break;
        jacob_idx++;
        if (jacob_idx < jacob.size())
            limit = jacob[jacob_idx];
        if (limit >= pending.size())
            limit = pending.size();
        tmp = limit;
        
   }
   return mainChain;
}

std::deque<std::pair<int,int> >  PmergeMe::sortDequePair(std::deque<std::pair<int,int> > &pair) {
    if (pair.size() <= 1) 
        return pair;    
    std::deque<int> winners;
    size_t i = 0;
    while (i < pair.size())
    {
        winners.push_back(pair[i].first);
        i++;
    }
    this->sortDeque(winners);
    std::deque<std::pair<int,int> > sorted_pair;
    std::deque<bool> used(pair.size(),false);
    i = 0;
    size_t j = 0;
    while (i < pair.size())
    {
        while (j < winners.size())
        {
            if (!used[j] && pair[i].first == winners[j])
            {
                 sorted_pair.push_back(pair[i]);
                 used[j] = true;
                 break;
            }
            j++;
        }
        j = 0;
        i++; 
    }
    return sorted_pair;
}


void PmergeMe::sortDeque(std::deque<int>& arr) {
    if (arr.size() <= 1) return;
    int end = -1;
    bool hasEnd = false;
    std::deque<std::pair<int,int> > p;
    size_t i = 0;
    if (arr.size() % 2 != 0) {
        end = arr.back();
        arr.pop_back();
        hasEnd = true;
    }
    while (i < arr.size())
    {
        if (arr[i] > arr[i+1])
            p.push_back(std::make_pair(arr[i], arr[i+1]));
        else
            p.push_back(std::make_pair(arr[i+1], arr[i]));
        i = i + 2;
    }
    p = this->sortDequePair(p);
    arr = this->insertDeque(p);
    if (hasEnd)
    {
        std::deque<int>::iterator pos = std::lower_bound(arr.begin(), arr.end(), end);
        arr.insert(pos,end);
    }
}

// ---- Execution and Display ----

// void PmergeMe::printVector(const std::string& prefix, const std::vector<int>& vec) const {
//   std::cout << "pass" ;

// }

// void PmergeMe::execute() {
//   std::cout << "pass" ;
// }