/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:22:48 by kkoujan           #+#    #+#             */
/*   Updated: 2025/10/29 14:51:53 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal
{
    protected :
        std::string type;
    public :
        Animal();
        ~Animal();
        Animal(const Animal &other);
        Animal &operator=(const Animal &other);
        std::string  getType();
        void    setType(std::string type);
        void    makeSound();
};

#endif