/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:22:52 by kkoujan           #+#    #+#             */
/*   Updated: 2025/11/13 16:54:32 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    int animalSize = 4;
    Animal *Animals = new Animal[animalSize];
    for (int i = 0; i < animalSize / 2; i++)
    {
        Animal *dog = new Dog();
        Animals[i] = *dog;
    }
    for (int i = 0; i < animalSize / 2; i++)
    {
        Animal *cat = new Cat();
        Animals[i] = *cat;
    }
    return 0;
}