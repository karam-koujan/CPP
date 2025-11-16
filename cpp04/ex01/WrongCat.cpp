/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:56:55 by kkoujan           #+#    #+#             */
/*   Updated: 2025/11/11 17:41:47 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include <iostream>

WrongCat::WrongCat()
{
    this->type = "WrongCat";
    std::cout << "WrongCat is created" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat is destroyed" << std::endl;
}

WrongCat::WrongCat(const WrongCat &other)
{
    this->type = other.type;
    std::cout << "WrongCat copy constuctor" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
    if (this != &other)
    {
        this->type = other.type;   
    }
    std::cout << "WrongCat copy assignement is called" << std::endl;
    return (*this);
}

std::string WrongCat::getType() const
{
    return this->type;
}

void WrongCat::setType(std::string type)
{
    this->type = type;
}

void    WrongCat::makeSound() const
{
    std::cout << "WrongCat sound" << std::endl;
}