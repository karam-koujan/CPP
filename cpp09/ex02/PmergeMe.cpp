/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 10:05:20 by kkoujan           #+#    #+#             */
/*   Updated: 2026/06/06 09:56:03 by kkoujan          ###   ########.fr       */
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
void PmergeMe::parseInputDeque(char* str) {
    std::string sequence = str;
    if (sequence.find_first_not_of("0123456789 \t\n\r") != std::string::npos || sequence.size() == 0)
        throw std::runtime_error("Error : please enter a positive number"); 
    int number;
    std::istringstream ss(sequence);

    while (ss >> number)
    {
        _deq.push_back(number);
    }
    if (ss.fail() && !ss.eof())
    {
        throw std::runtime_error("Error : detect overflow"); 
    }
}

void PmergeMe::parseInputVector(char* str) {
    std::string sequence = str;
    if (sequence.find_first_not_of("0123456789 \t\n\r") != std::string::npos || sequence.size() == 0)
        throw std::runtime_error("Error : please enter a positive number"); 
    int number;
    std::istringstream ss(sequence);

    while (ss >> number)
    {
        _vec.push_back(number);
    }
    if (ss.fail() && !ss.eof())
    {
        throw std::runtime_error("Error : detect overflow"); 
    }
}

std::vector<size_t> PmergeMe::generateJacobsthalVector(size_t n) {
    std::vector<size_t> jacob;
    jacob.push_back(0);
    jacob.push_back(1);

    while (jacob.back() < n)
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
    if (jacob.size() <= 2)
        return mainChain;
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
    if (jacob.size() <= 2)
        return mainChain;
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
    while (i < winners.size())
    {
        while (j < pair.size())
        {
            if (!used[j] && winners[i] == pair[j].first)
            {
                sorted_pair.push_back(pair[j]);
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


void PmergeMe::execute(char *str) {
    timeval start;
    timeval end;
    size_t i = 0;

    std::cout << std::endl;
    gettimeofday(&start, NULL);

    this->parseInputDeque(str);
    std::cout << "Before :  ";
    while (i < _deq.size())
    {
        std::cout << _deq[i]  << " ";
        i++;
    }
    this->sortDeque(_deq);
    gettimeofday(&end, NULL);
    double udeque_time = end.tv_usec - start.tv_usec;
    gettimeofday(&start, NULL);
    this->parseInputVector(str);
    this->sortVector(_vec);
    gettimeofday(&end, NULL);
    double vector_time = end.tv_usec - start.tv_usec;
    std::cout << "After :  ";
    i = 0;
    while (i < _vec.size())
    {
        std::cout << _vec[i]  << " ";
        i++;
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of 5 elements with std:deque : " << udeque_time <<  "us" << std::endl;
    std::cout << "Time to process a range of 5 elements with std:vector : " << vector_time << "us" << std::endl;
}