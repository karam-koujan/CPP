/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 15:00:57 by kkoujan           #+#    #+#             */
/*   Updated: 2025/11/13 16:31:23 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Dog.hpp"
#include <iostream>

Dog::Dog()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog is created" << std::endl;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog is destroyed" << std::endl;
}

Dog::Dog(const Dog &other)
{
    this->type = other.type;
    std::cout << "Dog copy constuctor" << std::endl;
}

Dog &Dog::operator=(const Dog &other)
{
    if (this != &other)
    {
        this->type = other.type;   
    }
    std::cout << "Dog copy assignement is called" << std::endl;
    return (*this);
}

std::string Dog::getType() const
{
    return this->type;
}

void Dog::setType(std::string type)
{
    this->type = type;
}

void    Dog::makeSound() const
{
    std::cout << "Dog sound" << std::endl;
}