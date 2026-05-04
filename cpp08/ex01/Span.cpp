/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:46:56 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/04 14:44:05 by kkoujan          ###   ########.fr       */
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

Span::Span(unsigned int N): n(N), vec(), size(0){}


Span::Span(const Span &other):n(other.n), vec(other.vec), size(0){}

const Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        n = other.n;
        vec = other.vec;
        size = other.size;
    }
    return *this;
}


// still not handled exception

void    Span::addNumber(int number)
{
    if (size == n)
    {
        throw Span::FullSpanException();
    }
    size++;
    vec.push_back(number);
}

long    Span::shortestSpan()
{
    if (size < 2)
    {
        throw Span::NoSpanException();
    }
    std::vector<int> c_vec = vec;
    std::sort(c_vec.begin(), c_vec.end());
    return std::abs(c_vec[1]) - std::abs(c_vec[0]);
}

long    Span::longestSpan()
{
    if (size < 2)
    {
        throw Span::NoSpanException();
    }
    std::vector<int>::iterator max = std::max_element(vec.begin(), vec.end());
    std::vector<int>::iterator min = std::min_element(vec.begin(), vec.end());
    return std::abs(*max - *min);
}