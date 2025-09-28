/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 10:37:55 by kkoujan           #+#    #+#             */
/*   Updated: 2025/09/28 09:44:54 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
    public :
        Zombie();
        ~Zombie();
        void    announce(void);
        void    setName(std::string name);
    private :
        std::string name;
};

Zombie* zombieHorde(int N, std::string name);

#endif