/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 13:06:00 by kkoujan           #+#    #+#             */
/*   Updated: 2025/09/18 13:13:43 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
int main()
{
    std::string str = "HI THIS IS BRAIN";
    std::string *str_ptr = &str;
    std::string &str_ref = str;
    std::cout << "The memory address of the string variable: " << &str << std::endl;
    std::cout << "The memory address held by stringPTR: " << str_ptr << std::endl;
    std::cout << "The memory address held by stringREF: " << &str_ref << std::endl;
    std::cout << "The value of string variable: " << str << std::endl;
    std::cout << "The value of stringPTR: " << *str_ptr << std::endl;
    std::cout << "The value of stringREF: " << str_ref << std::endl;
}