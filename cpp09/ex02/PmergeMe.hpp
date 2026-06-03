/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 10:04:58 by kkoujan           #+#    #+#             */
/*   Updated: 2026/06/03 08:14:53 by kkoujan          ###   ########.fr       */
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


public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(const PmergeMe& src);
    PmergeMe& operator=(const PmergeMe& rhs);
    
    void parseInput(int argc, char** argv);
    std::vector<int> sortVector(std::vector<int>& arr);
    std::vector<std::pair<int,int> > PmergeMe::sortVectorPair(std::vector<std::pair<int,int> > &pair);
    std::vector<int>& insertVector(std::vector<std::pair<int,int>> pair);
    
    void sortDeque(std::deque<int>& arr);
    std::vector<int>& insertDeque(std::deque<std::pair<int,int>> pair);
    std::vector<std::pair<int,int> > PmergeMe::sortDequePair(std::deque<std::pair<int,int> > &pair);

    std::vector<size_t> generateJacobsthal(size_t n);
    void execute();
    void printVector(const std::string& prefix, const std::vector<int>& vec) const;
};

#endif