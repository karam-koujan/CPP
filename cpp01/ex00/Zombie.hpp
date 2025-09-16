/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 10:37:55 by kkoujan           #+#    #+#             */
/*   Updated: 2025/09/04 11:49:20 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
    public :
        Zombie(std::string name);
        ~Zombie();
        void    announce(void);
    private :
        std::string name;
};
Zombie* newZombie(std::string name);
void randomChump( std::string name );

#endif