/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:46:56 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/01 18:38:33 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

Span::Span()
{
    std::cout << "default constructor" << std::endl;
}

Span::~Span()
{
    std::cout << "destructor" << std::endl;
}

Span::Span(unsigned int N): n(N){};


Span::Span(const Span &other):n(other.n), vec(other.vec){};

const Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        n = other.n;
        vec = other.vec;
    }
};
