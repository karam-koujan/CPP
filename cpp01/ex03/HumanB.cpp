/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:59:17 by kkoujan           #+#    #+#             */
/*   Updated: 2025/10/04 15:00:41 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB()
{
    std::cout << "HumanB is destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon &w)
{
    weapon = &w;
}

void HumanB::attack()
{
    if (weapon)
        std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}