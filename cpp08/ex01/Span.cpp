/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:46:56 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/01 18:52:40 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>
#include <algorithm>

Span::Span()
{
    std::cout << "default constructor" << std::endl;
}

Span::~Span()
{
    std::cout << "destructor" << std::endl;
}

Span::Span(unsigned int N): n(N){}


Span::Span(const Span &other):n(other.n), vec(other.vec){}

const Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        n = other.n;
        vec = other.vec;
    }
}


// still not handled exception

void    Span::addNumber(int number)
{
    vec.push_back(number);
}

long    Span::shortestSpan()
{
    std::vector<int> c_vec = vec;
    std::sort(c_vec.begin(), c_vec.end());
    return std::abs(c_vec[1] - c_vec[0]);
}

long    Span::longestSpan()
{
    std::vector<int> c_vec = vec;
    std::sort(c_vec.begin(), c_vec.end());
    int last = c_vec[c_vec.size() - 1];
    return std::abs(last - c_vec[0]);
}