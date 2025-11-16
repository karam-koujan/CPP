/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 12:14:16 by kkoujan           #+#    #+#             */
/*   Updated: 2025/09/18 12:27:00 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int n = 5;
    int i = 0;
    Zombie *Zombies = zombieHorde(n, "Zombieeeee");
    if (!Zombies)
        return (1);
    while (i < n)
    {
        Zombies->announce();
        i++;
    }
    delete[] Zombies;
}