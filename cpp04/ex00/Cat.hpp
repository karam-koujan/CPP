/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:34:41 by kkoujan           #+#    #+#             */
/*   Updated: 2025/10/29 14:56:11 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
#define CAT_H

#include "Animal.hpp"

class Cat : public Animal
{
    public :
        Cat();
        ~Cat();
        Cat(const Animal &other);
        Cat &operator=(const Animal &other);
        std::string  getType();
        void    setType(std::string type);
        void    makeSound();
};

#endif