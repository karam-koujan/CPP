/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 11:48:07 by kkoujan           #+#    #+#             */
/*   Updated: 2025/09/21 12:38:22 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){};

Harl::~Harl()
{
    std::cout << "obj is destroyed" << std::endl;
}

void Harl::debug()
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info()
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning()
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error()
{
    std::cout <<  "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    std::string lvl[] = {"debug", "info", "warning", "error"};
    void (Harl::*ptrToMem[])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;
    while(i < 4 && lvl[i] != level)
    {
        i++;
    }
    if (i < 4)
        (this->*ptrToMem[i])();
}


