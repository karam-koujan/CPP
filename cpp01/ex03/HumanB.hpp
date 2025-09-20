/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 09:36:05 by kkoujan           #+#    #+#             */
/*   Updated: 2025/09/20 11:55:15 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"


class HumanB
{
    private :
        std::string name;
        Weapon *weapon;
    public:
        HumanB(std::string n): name(n) {};
        ~HumanB();
        void    setWeapon(Weapon &weapon);
        void    attack();
        
};

#endif