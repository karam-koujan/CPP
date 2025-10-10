/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/10 09:54:56 by kkoujan           #+#    #+#             */
/*   Updated: 2025/10/10 11:34:38 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>

ScavTrap::ScavTrap()
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    name = "";
    std::cout << "Default Constructor for ScavTrap" << std::endl;    
}

ScavTrap::~ScavTrap()
{
    std::cout << "Deconstructor for ScavTrap" << std::endl;      
} 

ScavTrap::ScavTrap(std::string n)
{
    hitPoints = 100;
    energyPoints = 50;
    attackDamage = 20;
    name = n;
    std::cout << "parametrized constructor is called of ScavTrap" << std::endl;   
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    std::cout << "copy constructor of ScavTrap is called of name " << this->name << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
        std::cout << "assignement operator of ScavTrap is called with name "<< this->name << std::endl;
    }
    return (*this);
}

void ScavTrap::guardGate()
{
    std::cout << "The ScavTrap is now in Gate keeper mode" << std::endl;
}