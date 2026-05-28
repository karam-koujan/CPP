/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 06:32:15 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/28 06:18:38 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}
RPN::~RPN() {}
RPN::RPN(const RPN &other) : s(other.s) {}

RPN &RPN::operator=(const RPN &other) {
    if (this != &other) {
        this->s = other.s;
    }
    return *this;
}

void   RPN::do_operation(char op)
{
    int b = s.top();
    s.pop();
    int a = s.top();
    s.pop();
    switch(op)
    {
        case '+':
            s.push(a + b);
            break;
        case '*':
            s.push(a * b);
            break;
        case '/':
            s.push(a / b);
            break;
        case '-':
            s.push(a - b);
            break;
        default :
            return ;
    }
}
int    RPN::calculation(std::string &sequence)
{
    if (sequence.length() <= 2)
    {
        throw std::runtime_error("the sequence length should have more than 2 elements");
    }
    size_t i = -1;
    while (++i < sequence.length())
    {
        if (isspace(sequence[i])) continue;
        if ((sequence[i] == '+' || sequence[i] == '-' || sequence[i] == '/' || sequence[i] == '*'))
        {
            if (s.size() == 0)
                throw std::runtime_error("no operands");
            if (s.size() == 1)
                throw std::runtime_error("Invalid expression: too many operands remaining on stack");
            this->do_operation(sequence[i]);
            continue;
        }
        if (!isdigit(sequence[i]))
        {
            throw std::runtime_error("invalid operator or operand");
        }
        if (i + 1 < sequence.length() && isdigit(sequence[i]) && isdigit(sequence[i + 1]))
        {
            throw std::runtime_error("the number should be less than 10");                 
        }
        s.push(sequence[i] - '0');
    }
    if (s.size() != 1) {
        throw std::runtime_error("too many operands remaining on stack");
    }
    return s.top();
}