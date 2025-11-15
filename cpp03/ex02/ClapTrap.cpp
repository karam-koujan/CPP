/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 09:24:59 by kkoujan           #+#    #+#             */
/*   Updated: 2025/11/15 09:44:02 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap():hitPoints(10), energyPoints(10), attackDamage(0), name("")
{
    std::cout << "Claptrap default constructor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string n): hitPoints(10), energyPoints(10), attackDamage(0), name(n)
{
    std::cout << "Claptrap parameterized constructor is called of name " << this->name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    std::cout << "Claptrap copy constructor is called of name " << this->name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    if (this != &other)
    {
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
        std::cout << "Claptrap assignement operator is called of name "<< this->name << std::endl;
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout<< "Claptrap destructors is called of name "<< this->name << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (!this->attackDamage)
    {
        std::cout <<  "ClapTrap " << this->name  << " has zero attack damage" << std::endl;
        return ;     
    }
    if (this->hitPoints > 0 && this->energyPoints > 0)
    {
        this->energyPoints--;        
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        return;
    }
    std::cout <<  "ClapTrap " << this->name  << " has not enough energy to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " is already dead" << std::endl;
        return ;
    }
    if (amount >= this->hitPoints)
        this->hitPoints = 0;
    else
        this->hitPoints-= amount;
    std::cout << "ClapTrap " << this->name << " took amount " << amount << " of damage, current hitpoints is " << this->hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    
    if (this->hitPoints > 0 && this->energyPoints > 0)
    {
        this->energyPoints--;
        this->hitPoints+= amount;
        std::cout << "ClapTrap " << this->name << " repairs itself and it gains " << amount << " current hitpoint is " << this->hitPoints <<std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->name << " cannot repairs itself" << std::endl;
}
