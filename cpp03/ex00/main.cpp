/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:47:02 by kkoujan           #+#    #+#             */
/*   Updated: 2025/11/15 09:09:41 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


int main()
{
    ClapTrap a = ClapTrap("first");
    a.attack("test");
    a.takeDamage(15);
    a.beRepaired(1);
    a.takeDamage(1);
}