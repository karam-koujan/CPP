/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 10:05:20 by kkoujan           #+#    #+#             */
/*   Updated: 2026/06/01 10:05:24 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}
PmergeMe::~PmergeMe() {}

void PmergeMe::parseInput(int argc, char** argv) {
    for (int i = 1; i < argc; ++i) {
        std::string arg = argv[i];
        if (arg.empty() || arg.find_first_not_of("0123456789 ") != std::string::npos) {
            throw std::invalid_argument("Error: Invalid sequence.");
        }
        std::stringstream ss(arg);
        std::string token;
        while (ss >> token) {
            long val = std::atol(token.c_str());
            if (val < 0 || val > 2147483647) {
                throw std::invalid_argument("Error: Number out of bounds.");
            }
            _vec.push_back(static_cast<int>(val));
            _deq.push_back(static_cast<int>(val));
        }
    }
}

std::vector<size_t> PmergeMe::generateJacobsthal(size_t n) {
    std::vector<size_t> jacob;
    jacob.push_back(0);
    jacob.push_back(1);
    size_t last = 1;
    size_t secondLast = 0;
    while (true) {
        size_t next = last + 2 * secondLast;
        jacob.push_back(next);
        secondLast = last;
        last = next;
        if (next > n) break;
    }
    return jacob;
}

// ---- Vector Implementation ----

void PmergeMe::insertVector(std::vector<int>& mainChain, std::vector<int>& pending) {
    std::vector<size_t> jacob = generateJacobsthal(pending.size());
    size_t pendingIndex = 0;
    size_t jacobIndex = 2; // Skip 0 and 1
    
    while (pendingIndex < pending.size()) {
        size_t limit = (jacob[jacobIndex] < pending.size()) ? jacob[jacobIndex] : pending.size();
        for (size_t i = limit; i > pendingIndex; --i) {
            int valToInsert = pending[i - 1];
            std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), valToInsert);
            mainChain.insert(pos, valToInsert);
        }
        pendingIndex = limit;
        jacobIndex++;
    }
}

void PmergeMe::sortVector(std::vector<int>& arr) {
    if (arr.size() <= 1) return;

    std::vector<int> mainChain;
    std::vector<int> pending;
    
    int straggler = -1;
    bool hasStraggler = false;

    if (arr.size() % 2 != 0) {
        straggler = arr.back();
        arr.pop_back();
        hasStraggler = true;
    }

    for (size_t i = 0; i < arr.size(); i += 2) {
        if (arr[i] > arr[i+1]) {
            mainChain.push_back(arr[i]);
            pending.push_back(arr[i+1]);
        } else {
            mainChain.push_back(arr[i+1]);
            pending.push_back(arr[i]);
        }
    }

    sortVector(mainChain);
    insertVector(mainChain, pending);

    if (hasStraggler) {
        std::vector<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), straggler);
        mainChain.insert(pos, straggler);
    }
    arr = mainChain;
}

// ---- Deque Implementation ----

void PmergeMe::insertDeque(std::deque<int>& mainChain, std::deque<int>& pending) {
    std::vector<size_t> jacob = generateJacobsthal(pending.size());
    size_t pendingIndex = 0;
    size_t jacobIndex = 2;
    
    while (pendingIndex < pending.size()) {
        size_t limit = (jacob[jacobIndex] < pending.size()) ? jacob[jacobIndex] : pending.size();
        for (size_t i = limit; i > pendingIndex; --i) {
            int valToInsert = pending[i - 1];
            std::deque<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), valToInsert);
            mainChain.insert(pos, valToInsert);
        }
        pendingIndex = limit;
        jacobIndex++;
    }
}

void PmergeMe::sortDeque(std::deque<int>& arr) {
    if (arr.size() <= 1) return;

    std::deque<int> mainChain;
    std::deque<int> pending;
    
    int straggler = -1;
    bool hasStraggler = false;

    if (arr.size() % 2 != 0) {
        straggler = arr.back();
        arr.pop_back();
        hasStraggler = true;
    }

    for (size_t i = 0; i < arr.size(); i += 2) {
        if (arr[i] > arr[i+1]) {
            mainChain.push_back(arr[i]);
            pending.push_back(arr[i+1]);
        } else {
            mainChain.push_back(arr[i+1]);
            pending.push_back(arr[i]);
        }
    }

    sortDeque(mainChain);
    insertDeque(mainChain, pending);

    if (hasStraggler) {
        std::deque<int>::iterator pos = std::lower_bound(mainChain.begin(), mainChain.end(), straggler);
        mainChain.insert(pos, straggler);
    }
    arr = mainChain;
}

// ---- Execution and Display ----

void PmergeMe::printVector(const std::string& prefix, const std::vector<int>& vec) const {
    std::cout << prefix;
    size_t limit = (vec.size() > 10) ? 5 : vec.size();
    for (size_t i = 0; i < limit; ++i) {
        std::cout << vec[i] << " ";
    }
    if (vec.size() > 10) std::cout << "[...]";
    std::cout << std::endl;
}

void PmergeMe::execute() {
    printVector("Before: ", _vec);

    // Sort Vector
    clock_t startVec = clock();
    sortVector(_vec);
    clock_t endVec = clock();
    double timeVec = static_cast<double>(endVec - startVec) / CLOCKS_PER_SEC * 1000000;

    // Sort Deque
    clock_t startDeq = clock();
    sortDeque(_deq);
    clock_t endDeq = clock();
    double timeDeq = static_cast<double>(endDeq - startDeq) / CLOCKS_PER_SEC * 1000000;

    printVector("After: ", _vec);

    std::cout << "Time to process a range of " << _vec.size() 
              << " elements with std::vector : " << timeVec << " us" << std::endl;
    std::cout << "Time to process a range of " << _deq.size() 
              << " elements with std::deque : " << timeDeq << " us" << std::endl;
}