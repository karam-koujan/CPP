/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 10:05:20 by kkoujan           #+#    #+#             */
/*   Updated: 2026/06/02 11:22:01 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}

void PmergeMe::parseInput(int argc, char** argv) {
  
}

std::vector<size_t> PmergeMe::generateJacobsthal(size_t n) {
    std::vector<size_t> jacob;
    jacob.push_back(0);
    if (n == 1)
        return jacob;
    jacob.push_back(1);
    if (n == 2)
        return jacob;    
    size_t i = 1;
    while (i < n - 1)
    {
        jacob.push_back(jacob[i] + (2 * jacob[i - 1]));
        i++;
    }
    return jacob;
}
// ---- Vector Implementation ----

std::vector<int> PmergeMe::insertVector(std::vector<std::pair<int,int>> &pair) {
    std::vector<int> mainChain; 
    std::vector<int> pending;
    size_t i = 0;
    while (i < pair.size())
    {
        mainChain.push_back(pair[i].first);
        pending.push_back(pair[i].second);   
        i++;
    }
    std::vector<size_t> jacob = this->generateJacobsthal(pending.size());
    size_t jacob_idx = 2;
    size_t limit = jacob[jacob_idx];
     size_t edge = 0;

    while (jacob_idx < jacob.size())
    {
        if (limit >= pending.size())
            limit = pending.size();
        while (limit > edge)
        {
            int partner = pair[limit - 1].first;
            std::vector<int>::iterator upper_bound = mainChain.end();
            for (std::vector<int>::iterator it = mainChain.begin(); it != mainChain.end(); ++it) {
                if (*it == partner) {
                    upper_bound = it;
                    break;
                }
            }
            std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), upper_bound, pending[limit - 1]);
            mainChain.insert(pos, pending[limit - 1]);
           limit--;
        } 
        jacob_idx++;
        edge = limit;
i       if (jacob_idx < jacob.size())
            limit = jacob[jacob_idx];        
        }
    return mainChain;
}

std::vector<std::pair<int,int> > PmergeMe::sortVectorPair(std::vector<std::pair<int,int> > &pair) {
    if (pair.size() <= 1) 
        return pair;

    // Extract the winners (.first elements) to sort them recursively
    std::vector<int> winners;
    for (size_t i = 0; i < pair.size(); ++i) {
        winners.push_back(pair[i].first);
    }

    this->sortVector(winners);

    std::vector<std::pair<int,int> > sortedPairs;
    std::vector<bool> used(pair.size(), false);
    for (size_t i = 0; i < winners.size(); ++i) {
        for (size_t j = 0; j < pair.size(); ++j) {
            if (!used[j] && pair[j].first == winners[i]) {
                sortedPairs.push_back(pair[j]);
                used[j] = true;
                break;
            }
        }
    }
    return sortedPairs;
}
void PmergeMe::sortVector(std::vector<int>& arr) {
    if (arr.size() <= 1) return;
    int end = -1;
    bool hasEnd = false;
    size_t i = 0;
    std::vector<std::pair<int,int>> p;
    
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
    std::vector<int> mainChain = this->insertVector(p) ;

    if (hasEnd) {
        std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), end);
        mainChain.insert(pos, end);
    }
    arr = mainChain;
}

// ---- Deque Implementation ----

void PmergeMe::insertDeque(std::deque<int>& mainChain, std::deque<int>& pending) {
   
}

void PmergeMe::sortDeque(std::deque<int>& arr) {
    
   
}

// ---- Execution and Display ----

void PmergeMe::printVector(const std::string& prefix, const std::vector<int>& vec) const {

}

void PmergeMe::execute() {

}