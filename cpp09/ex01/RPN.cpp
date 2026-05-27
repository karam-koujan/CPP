/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 06:32:15 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/27 06:51:44 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    
}