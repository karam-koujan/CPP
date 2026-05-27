/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 06:32:15 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/27 06:58:33 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN() {}
~RPN() {}
RPN(const RPN &other) : s(other.s) {}

RPN &operator=(const RPN &other) {
    if (this != &other) {
        this->s = other.s;
    }
    return *this;
}


int    RPN::calculation(std::string &sequence)
{
    if (sequence.length() <= 2)
    {
        throw std::runtime_exception("the sequence length should have more than 2 elements");
    }
    int i = 0;
    while (i < sequence.length())
    {
        i++;
    }
}