/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 11:45:30 by kkoujan           #+#    #+#             */
/*   Updated: 2025/11/15 09:49:19 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap()
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    name = "";
    std::cout << "Default Constructor for FragTrap" << std::endl;    
}

FragTrap::~FragTrap()
{
    std::cout << "Destructor for FragTrap" << std::endl;      
} 

FragTrap::FragTrap(std::string n)
{
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    name = n;
    std::cout << "parametrized constructor is called of FragTrap" << std::endl;   
}

FragTrap::FragTrap(const FragTrap &other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    std::cout << "copy constructor of FragTrap is called of name " << this->name << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
        std::cout << "assignement operator of FragTrap is called with name "<< this->name << std::endl;
    }
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "Hi high-fives ?" << std::endl;
}
