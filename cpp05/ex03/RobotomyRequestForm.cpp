/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: Invalid date        by kkoujan           #+#    #+#             */
/*   Updated: 20245/12/16 16:27:19 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 0, 72, 45, "")
{
    std::cout << "Robotomy default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string t):AForm("RobotomyRequestForm", 0, 72, 45, t)
{
    std::cout << "Robotomy parameter constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other): AForm("RobotomyRequestForm", 0, 72, 45, other.getTarget())
{
    std::cout << "Robotomy copy constructor" << std::endl;
}

const RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    (void)other;
    std::cout << "Robotomy copy assignment" << std::endl;
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Robotomy is destroyed" << std::endl;
}

RobotomyRequestForm::RobotomyFailed::RobotomyFailed()
{
    std::cout << "RobotomyFailedExeption" << std::endl;
}

const char *RobotomyRequestForm::RobotomyFailed::what() const throw()
{
    return "the robotomy is failed";
}

void    RobotomyRequestForm::execAction(Bureaucrat const & executor) const
{
    std::srand(std::time(0));
    this->execute(executor);
    if (std::rand() % 2 == 0)
    {
        std::cout << "Driling noiseeeeeeeee.......\n" << getTarget() << " has been robotomized successfully 50% of the time." << std::endl;
    }
    else
    {
        throw RobotomyFailed();
    }
}
