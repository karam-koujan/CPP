/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:28:49 by kkoujan           #+#    #+#             */
/*   Updated: 2025/10/29 15:17:21 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
#define DOG_H

#include "Animal.hpp"

class Dog : public Animal
{
    public :
        Dog();
        ~Dog();
        Dog(const Animal &other);
        Dog &operator=(const Animal &other);
        std::string getType() const;
        void    setType(std::string type);
        void    makeSound() const;
};
#endif