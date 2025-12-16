/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:08:49 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/16 16:25:40 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 0, 25, 5),target("")
{
    std::cout << "Presidential default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string t):AForm("PresidentialPardonForm", 0, 25, 5),target(t)
{
    std::cout << "Presidential parameter constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other):AForm(other.name, other.isSigned, other.gradToSign, other.gradToExec),target(other.target)
{
    std::cout << "Presidential copy constructor" << std::endl;
}

const PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    (void)other;
    std::cout << "Presidential copy assignment" << std::endl;
    return other;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Presidential is destroyed" << std::endl;
}

void    PresidentialPardonForm::execAction(Bureaucrat const & executor) const
{
    this->execute(executor);
    std::cout << this->target << " has been pardoned by " << "Zaphod Beeblebrox." << std::endl;
}
