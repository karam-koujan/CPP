/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:56:55 by kkoujan           #+#    #+#             */
/*   Updated: 2025/11/16 14:25:19 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <iostream>

Cat::Cat()
{
    this->type = "Cat";
    this->brain = new Brain();
    std::cout << "Cat is created" << std::endl;
}

Cat::~Cat()
{
    delete this->brain;
    std::cout << "Cat is destroyed" << std::endl;
}

Cat::Cat(const Cat &other)
{
    this->type = other.type;
    Brain *brain = new Brain();
    *brain = *other.brain;
    this->brain = brain; 
    std::cout << "Cat copy constuctor" << std::endl;
}

Cat &Cat::operator=(const Cat &other)
{
    if (this != &other)
    {
        Brain *brain = new Brain();
        *brain = *other.brain;
        this->brain = brain; 
        this->type = other.type;   
    }
    std::cout << "Cat copy assignement is called" << std::endl;
    return (*this);
}

std::string Cat::getType() const
{
    return this->type;
}

void Cat::setType(std::string type)
{
    this->type = type;
}

void    Cat::makeSound() const
{
    std::cout << "Cat sound" << std::endl;
}