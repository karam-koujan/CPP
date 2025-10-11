/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:47:02 by kkoujan           #+#    #+#             */
/*   Updated: 2025/10/11 10:47:51 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main()
{
    /*
    HitPoints : 100
    EnergyPoints: 50
    Attackdamage: 30
    
    */
    DiamondTrap a = DiamondTrap("first");
    a.attack("test");
    a.takeDamage(15);
    a.beRepaired(1);
    a.takeDamage(1);
    a.highFivesGuys();
    a.whoAmI();
}