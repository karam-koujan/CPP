/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 10:04:58 by kkoujan           #+#    #+#             */
/*   Updated: 2026/06/06 09:50:48 by kkoujan          ###   ########.fr       */
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
#include <sys/time.h>
#include <algorithm>
#include <stdexcept>

class PmergeMe {
private:
    std::vector<int> _vec;
    std::deque<int> _deq;


public:
    PmergeMe();
    ~PmergeMe();
    PmergeMe(const PmergeMe& other);
    PmergeMe& operator=(const PmergeMe& other);
    
    void parseInputVector(char* str);
    void parseInputDeque(char* str); 
    void sortVector(std::vector<int>& arr);
    std::vector<std::pair<int,int> > sortVectorPair(std::vector<std::pair<int,int> > &pair);
    std::vector<int> insertVector(std::vector<std::pair<int,int> > &pair);
    
    void sortDeque(std::deque<int>& arr);
    std::deque<int> insertDeque(std::deque<std::pair<int,int> > &pair);
    std::deque<std::pair<int,int> > sortDequePair(std::deque<std::pair<int,int> > &pair);

    std::vector<size_t> generateJacobsthalVector(size_t n);
    std::deque<size_t>  generateJacobsthalDeque(size_t n);
    void execute(char *str);
  //  void printVector(const std::string& prefix, const std::vector<int>& vec) const;
};

#endif