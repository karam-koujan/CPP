/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 08:43:22 by kkoujan           #+#    #+#             */
/*   Updated: 2025/11/15 10:03:22 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
class DiamondTrap : public FragTrap, public ScavTrap
{
    private :
        std::string name;
    public : 
        DiamondTrap();
        ~DiamondTrap();
        DiamondTrap(std::string name);
        DiamondTrap(const DiamondTrap &other);
        DiamondTrap &operator=(const DiamondTrap &other);
        void attack(const std::string& target);
        void whoAmI();
};

#endif