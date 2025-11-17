/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:22:52 by kkoujan           #+#    #+#             */
/*   Updated: 2025/11/17 11:51:30 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"
#include <iostream>

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    const Animal c = Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    c.makeSound();
    WrongAnimal *wanimal = new WrongAnimal();
    wanimal->makeSound();
    WrongCat *wCat = new WrongCat();
    wCat->makeSound();
    WrongAnimal *pwCat = new WrongCat();
    pwCat->makeSound();
    delete pwCat;
    delete wCat;
    delete wanimal;
    delete i;
    delete j;
    delete meta;
    return 0;
}