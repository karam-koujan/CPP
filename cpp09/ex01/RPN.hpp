/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 06:32:12 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/28 05:33:25 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <string>
#include <stdexcept>
#include <cstdlib>
#include <iostream>
class RPN
{
    private :
        std::stack<int> s;
    public :
        RPN();
        ~RPN();
        RPN(const RPN &other);
        RPN &operator=(const RPN &other);
        int calculation(std::string &sequence);
        void    do_operation(char op);
};

#endif