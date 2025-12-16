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

RobotomyRequestForm::RobotomyRequestForm(): AForm("RobotomyRequestForm", 0, 72, 45),target("")
{
    std::cout << "Robotomy default constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string t):AForm("RobotomyRequestForm", 0, 72, 45),target(t)
{
    std::cout << "Robotomy parameter constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):AForm(other.name, other.isSigned, other.gradToSign, other.gradToExec),target(other.target)
{
    std::cout << "Robotomy copy constructor" << std::endl;
}

const RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
    (void)other;
    std::cout << "Robotomy copy assignment" << std::endl;
    return other;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "Robotomy is destroyed" << std::endl;
}

void    RobotomyRequestForm::execAction(Bureaucrat const & executor) const
{
    try
    {
        this->execute(executor);
        std::cout << this->target << " has been robotomized successfully 50% of the time." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << "robotomy is failed" << std::endl;
    }
    
}
