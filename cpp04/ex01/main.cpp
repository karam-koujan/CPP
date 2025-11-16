/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 14:22:52 by kkoujan           #+#    #+#             */
/*   Updated: 2025/11/16 14:36:19 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#include <iostream>

int main()
{
    int animalSize = 4;
    Animal **Animals = new Animal*[animalSize];
    int rest = 0;
    for (int i = 0; i < animalSize / 2; i++)
    {
        Animal *dog = new Dog();
        Animals[i] = dog;
        rest = i;
    }
    for (int i = rest + 1; i < animalSize; i++)
    {
        Animal *cat = new Cat();
        Animals[i] = cat;
    }
    for (int i = 0; i < animalSize; i++)
    {
        delete Animals[i];
    }
    delete[] Animals;
    return 0;
}