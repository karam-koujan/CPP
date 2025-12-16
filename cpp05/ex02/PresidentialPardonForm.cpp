/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:08:49 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/16 16:12:17 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 0, 25, 5),target("")
{
    std::cout << "Shrubbery default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string t):AForm("PresidentialPardonForm", 0, 25, 5),target(t)
{
    std::cout << "Shrubbery parameter constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other):AForm(other.name, other.isSigned, other.gradToSign, other.gradToExec),target(other.target)
{
    std::cout << "Shrubbery copy constructor" << std::endl;
}

const PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    (void)other;
    std::cout << "Shrubbery copy assignment" << std::endl;
    return other;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Shrubbery is destroyed" << std::endl;
}

void    PresidentialPardonForm::execAction(Bureaucrat const & executor) const
{
    this->execute(executor);
    std::cout << this->target << " has been pardoned by " << "Zaphod Beeblebrox." << std::endl;
}
