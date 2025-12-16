/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 18:05:21 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/16 18:21:08 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

Intern::Intern()
{
    std::cout << "Intern default constructor" << std::endl;
}

Intern::Intern(const Intern &other)
{
    (void)(other);
    std::cout << "Intern copy constructor" << std::endl;
}

Intern::~Intern()
{
    std::cout << "Intern is destroyed" << std::endl;
}

const Intern &Intern::operator=(const Intern &other)
{
    (void)(other);
    std::cout << "Intern assignment operator" << std::endl;
}

AForm *Intern::makeForm(std::string formName, std::string target)
{
    std::string formList[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    int i = 0;
    while (i < 3)
    {
        if (formList[i] == formName)
            break;
        i++;
    }
    if (i < 3)
        std::cout << "Intern creates " << formName << std::endl;
    switch (i)
    {
        case 0 :
            return new PresidentialPardonForm(target);
        case 1 :
            return new RobotomyRequestForm(target);
        case 2 :
            return new ShrubberyCreationForm(target);
    default:
        std::cerr << "This Form is not existing" << std::endl;
    }
    return NULL;
}