/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 10:59:17 by kkoujan           #+#    #+#             */
/*   Updated: 2025/09/20 12:01:56 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::~HumanB()
{
    std::cout << "HumanA is destroyed" << std::endl;
}

void HumanB::setWeapon(Weapon &w)
{
    weapon = &w;
}

void HumanB::attack()
{
    std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}