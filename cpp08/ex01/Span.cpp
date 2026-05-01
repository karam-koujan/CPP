/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:46:56 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/01 20:31:44 by kkoujan          ###   ########.fr       */
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

Span::Span(unsigned int N): n(N), vec(N), size(0){}


Span::Span(const Span &other):n(other.n), vec(other.vec), size(0){}

const Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        n = other.n;
        vec = other.vec;
        size = other.size;
    }
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
    return std::abs(c_vec[1] - c_vec[0]);
}

long    Span::longestSpan()
{
    if (size < 2)
    {
        throw Span::NoSpanException();
    }
    std::vector<int> c_vec = vec;
    std::sort(c_vec.begin(), c_vec.end());
    int last = c_vec[c_vec.size() - 1];
    return std::abs(last - c_vec[0]);
}