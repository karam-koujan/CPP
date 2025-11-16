/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 09:31:29 by kkoujan           #+#    #+#             */
/*   Updated: 2025/09/20 11:55:13 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        Weapon &weapon;
        std::string name;
    public:
        HumanA();
        HumanA(std::string n, Weapon &w): weapon(w) , name(n) {};
        ~HumanA();
        void    attack();

};
#endif