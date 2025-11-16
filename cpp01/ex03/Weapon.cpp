/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 09:47:55 by kkoujan           #+#    #+#             */
/*   Updated: 2025/09/20 11:57:56 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::~Weapon()
{
    std::cout << "Weapon is destroyed" << std::endl;
}

const std::string &Weapon::getType() const{
    return this->type;
}

void Weapon::setType(std::string newType)
{
    this->type = newType;
}
