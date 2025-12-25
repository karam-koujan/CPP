/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:08:49 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/25 10:31:48 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 0, 25, 5, "")
{
    std::cout << "Presidential default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string t):AForm("PresidentialPardonForm", 0, 25, 5, t)
{
    std::cout << "Presidential parameter constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other): AForm("PresidentialPardonForm", 0, 25, 5, other.getTarget())
{
    std::cout << "Presidential copy constructor" << std::endl;
}

const PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
    (void)other;
    std::cout << "Presidential copy assignment" << std::endl;
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "Presidential is destroyed" << std::endl;
}

void    PresidentialPardonForm::execAction(Bureaucrat const & executor) const
{
    this->execute(executor);
    std::cout << getTarget() << " has been pardoned by " << "Zaphod Beeblebrox." << std::endl;
}
