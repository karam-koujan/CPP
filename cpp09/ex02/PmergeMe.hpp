/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 10:04:58 by kkoujan           #+#    #+#             */
/*   Updated: 2026/06/01 10:05:01 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <string>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <stdexcept>

class PmergeMe {
private:
    std::vector<int> _vec;
    std::deque<int> _deq;

    // Orthodox Canonical Form
    PmergeMe(const PmergeMe& src);
    PmergeMe& operator=(const PmergeMe& rhs);

    // Vector implementation
    void sortVector(std::vector<int>& arr);
    void insertVector(std::vector<int>& mainChain, std::vector<int>& pending);
    
    // Deque implementation
    void sortDeque(std::deque<int>& arr);
    void insertDeque(std::deque<int>& mainChain, std::deque<int>& pending);

    // Jacobsthal sequence generator
    std::vector<size_t> generateJacobsthal(size_t n);

public:
    PmergeMe();
    ~PmergeMe();

    void parseInput(int argc, char** argv);
    void execute();
    void printVector(const std::string& prefix, const std::vector<int>& vec) const;
};

#endif