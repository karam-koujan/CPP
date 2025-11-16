/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:22:54 by kkoujan           #+#    #+#             */
/*   Updated: 2025/11/16 14:31:29 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include <iostream>

Animal::Animal(): type("Animal")
{
    std::cout << "Animal is created" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal is destroyed" << std::endl;
}

Animal::Animal(const Animal &other): type(other.type)
{
    std::cout << "Animal copy constuctor" << std::endl;
}

Animal &Animal::operator=(const Animal &other)
{
    if (this != &other)
    {
        this->type = other.type;   
    }
    std::cout << "Animal copy assignement is called" << std::endl;
    return (*this);
}

std::string  Animal::getType() const
{
    return this->type;
}

void Animal::setType(std::string type)
{
    this->type = type;
}

void    Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}