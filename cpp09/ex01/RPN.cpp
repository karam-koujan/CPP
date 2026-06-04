/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 06:32:15 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/30 11:30:14 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {
    op_flag = false;
}
RPN::~RPN() {}
RPN::RPN(const RPN &other) : s(other.s) ,op_flag(other.op_flag) {}

RPN &RPN::operator=(const RPN &other) {
    if (this != &other) {
        this->s = other.s;
        this->op_flag = other.op_flag;
    }
    return *this;
}

void   RPN::do_operation(char op)
{
    if (s.size() < 2) {
        throw std::runtime_error("too many operands remaining on stack");
    }
    int b = s.top();
    s.pop();
    int a = s.top();
    s.pop();
    op_flag = true;
    switch(op)
    {
        case '+':
            s.push(a + b);
            break;
        case '*':
            s.push(a * b);
            break;
        case '/':
            if (b == 0) throw std::runtime_error("division by zero");
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
    size_t i = -1;
    while (++i < sequence.length())
    {
        if (isspace(sequence[i])) continue;
        if ((sequence[i] == '+' || sequence[i] == '-' || sequence[i] == '/' || sequence[i] == '*'))
        {
            if (s.size() == 0)
                throw std::runtime_error("no operands");
  
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
    if (s.size() != 1 || !op_flag) {
        throw std::runtime_error("Error");
    }
    return s.top();
}