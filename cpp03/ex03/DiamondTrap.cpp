/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 09:00:10 by kkoujan           #+#    #+#             */
/*   Updated: 2025/11/15 11:19:44 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include <iostream>

DiamondTrap::DiamondTrap()
{
    std::cout << "Diamond default constructor called" << std::endl;   
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamond destructor called" << std::endl;   
}

DiamondTrap::DiamondTrap(std::string n): ClapTrap(), FragTrap(), ScavTrap()
{
    ClapTrap::name = n + "_clap_name";
    this->name = n;
    this->hitPoints = FragTrap::hitPoints;
    this->energyPoints = ScavTrap::energyPoints;
    this->attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap(const DiamondTrap &other)
{
    ClapTrap::name = other.name + "_clap_name";
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    std::cout << "copy constructor of DiamondTrap is called of name " << this->name << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &other)
{
    if (this != &other)
    {
        ClapTrap::name = other.name + "_clap_name";
        this->name = other.name;
        this->hitPoints = other.hitPoints;
        this->energyPoints = other.energyPoints;
        this->attackDamage = other.attackDamage;
    }
    std::cout << "assignement operator of DiamondTrap is called with name "<< this->name << std::endl;
    return (*this);
}


void    DiamondTrap::whoAmI()
{
    std::cout << "name is " << this->name << " ClapTrap name is : " << ClapTrap::name << std::endl;
}

void    DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}

