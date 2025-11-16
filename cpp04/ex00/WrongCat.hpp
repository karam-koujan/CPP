/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 17:33:07 by kkoujan           #+#    #+#             */
/*   Updated: 2025/11/11 17:35:19 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
#define WRONGCAT_H

#include "WrongAnimal.hpp"
#include <string>
class WrongCat : public WrongAnimal
{
    public :
        WrongCat();
        ~WrongCat();
        WrongCat(const WrongCat &other);
        WrongCat &operator=(const WrongCat &other);
        std::string getType() const;
        void    setType(std::string type);
        void    makeSound() const;     
};

#endif