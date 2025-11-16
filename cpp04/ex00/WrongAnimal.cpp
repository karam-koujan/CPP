/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:42:20 by kkoujan           #+#    #+#             */
/*   Updated: 2025/11/11 17:43:03 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"
#include <iostream>

WrongAnimal::WrongAnimal(): type("WrongAnimal")
{
    std::cout << "WrongAnimal is created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal is destroyed" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other): type(other.type)
{
    std::cout << "WrongAnimal copy constuctor" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other)
{
    if (this != &other)
    {
        this->type = other.type;   
    }
    std::cout << "WrongAnimal copy assignement is called" << std::endl;
    return (*this);
}

std::string  WrongAnimal::getType() const
{
    return this->type;
}

void WrongAnimal::setType(std::string type)
{
    this->type = type;
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound" << std::endl;
}