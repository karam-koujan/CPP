/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 09:56:38 by kkoujan           #+#    #+#             */
/*   Updated: 2025/09/20 12:02:01 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::~HumanA()
{
    std::cout << "HumanA is destroyed" << std::endl;
}
void HumanA::attack()
{
    std::cout << this->name << " attacks with their " << weapon.getType() << std::endl;
}

