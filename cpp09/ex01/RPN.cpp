/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 06:32:15 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/27 07:18:02 by kkoujan          ###   ########.fr       */
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
        if ((sequence[i] == '+' || sequence[i] == '-' || sequence[i] == '/' || sequence[i] == '*') && s.size() == 0)
        {
            throw std::runtime_exception("no operands");            
        }
        if (isdigit(sequence[i]) && sequence[i] <= '9')
        {
            s.push(sequence[i] - '0');
        }
        else 
        {
            throw std::runtime_exception("the number should be less than 10");                 
        }
        if ((sequence[i] == '+' || sequence[i] == '-' || sequence[i] == '/' || sequence[i] == '*') && s.size() == 1)
        {
            return stack.top();
        }
        if (!(sequence[i] == '+' || sequence[i] == '-' || sequence[i] == '/' || sequence[i] == '*') && !isdigit(sequence[i]) && !isspace(sequence[i]))
        {
            throw std::runtime_exception("invalid operator");
        }
        int a = s.top();
        s.pop();
        int b = s.top();
        s.pop();
        s.push(a * b)    
        i++;
    }
    return stack.top();
}