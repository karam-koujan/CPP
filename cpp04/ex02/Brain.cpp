/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/13 16:32:16 by kkoujan           #+#    #+#             */
/*   Updated: 2025/11/16 14:13:09 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>
Brain::Brain()
{
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = "idea";
    }
    std::cout << "Brain default constructor" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Brain default destructor" << std::endl;    
}

Brain::Brain(const Brain &other)
{
    std::cout << "Brain copy constuctor" << std::endl;
    for (int i = 0; i < 100; i++)
    {
        this->ideas[i] = other.ideas[i];
    }
}

Brain &Brain::operator=(const Brain &other)
{
    if (this != &other)
    {
        for (int i = 0; i < 100; i++)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
    std::cout << "Brain copy assignement is called" << std::endl;
    return (*this);
}