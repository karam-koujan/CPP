/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 09:24:59 by kkoujan           #+#    #+#             */
/*   Updated: 2025/10/07 10:17:25 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap():hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "default constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string n)
{
    this->name = n;
    std::cout << "parameterized constructor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    std::cout << "copy constructor is called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
        std::cout << "assignement operator is called" << std::endl;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout<< "destructors is called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->hitPoints > 0 && this->energyPoints > 0)
    {
        this->energyPoints--;        
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hitPoints-= amount;
    std::cout << "ClapTrap " << this->name << " took damage " << amount << ", causing " << this->attackDamage << " points of damage!" << std::endl;     
}

void ClapTrap::beRepaired(unsigned int amount)
{
    
    if (this->hitPoints > 0 && this->energyPoints > 0)
    {
        this->energyPoints--;
        this->hitPoints+= amount;
        std::cout << "ClapTrap " << this->name << " repairs itself and it gains " << amount << "of hits points, that costs " << std::endl;     
    }
}
