/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 11:48:07 by kkoujan           #+#    #+#             */
/*   Updated: 2025/09/21 14:11:44 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){};

Harl::~Harl(){};

void Harl::debug()
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    std::string lvl[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptrToMem[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;
    while(i < 4 && lvl[i] != level)
    {
        i++;
    }
    switch(i)
    {
        case 0:
            (this->*ptrToMem[0])();
            std::cout << std::endl;
        case 1:
            (this->*ptrToMem[1])();
            std::cout << std::endl;
        case 2:
            (this->*ptrToMem[2])();
            std::cout << std::endl;
        case 3:
            (this->*ptrToMem[3])();
            std::cout << std::endl;
            break;
        default :
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
 
    }
       
}


