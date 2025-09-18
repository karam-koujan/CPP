/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHord.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/18 11:44:10 by kkoujan           #+#    #+#             */
/*   Updated: 2025/09/18 12:30:30 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    if (N <= 0)
        return (NULL);
    Zombie *Zombies = new Zombie[N];
    if (!Zombies)
        return (NULL);
    int i = 0;
    while (i < N)
    {
        Zombies[i].set_name(name);
        i++;
    }
    return Zombies;
}