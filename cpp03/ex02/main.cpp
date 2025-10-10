/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 10:47:02 by kkoujan           #+#    #+#             */
/*   Updated: 2025/10/10 11:55:58 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"


int main()
{
    FragTrap a = FragTrap("first");
    a.attack("test");
    a.takeDamage(15);
    a.beRepaired(1);
    a.takeDamage(1);
    a.highFivesGuys();
}