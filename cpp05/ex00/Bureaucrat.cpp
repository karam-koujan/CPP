/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:36:38 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/04 10:23:02 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat()
{
    std::cout << "Bureaucrat default constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grad): name(this->name), grad(this->grad)
{
    if (grad < 1)
        throw GradeTooHighException();
    if (grad > 150)
        throw GradeTooLowException();
    std::cout << "Bureaucrat parameter constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other)
{
    *this = other;
    std::cout << "Bureaucrat copy constructor" << std::endl;
}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        this->grad = other.grad;
    }
    std::cout << "assignement operator" << std::endl;
}

void    Bureaucrat::incrementGrad()
{
    if (grad <= 1)
        throw GradeTooHighException();
    grad--;
    std::cout << this << std::endl;
}

void    Bureaucrat::decrementGrad()
{
    if (grad >= 150)
        throw GradeTooLowException();
    grad++;
    std::cout << this << std::endl;
}

const std::string &Bureaucrat::getName() const
{
    std::cout << this->name << std::endl;
}

const std::string &Bureaucrat::getGrade() const
{
    std::cout << this->grad << std::endl;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
    std::cout << "GradeTooHighException" << std::endl;
}

const std::string &Bureaucrat::GradeTooHighException::what() noexcept
{
    return "The grad is too High";
}

const std::string &Bureaucrat::GradeTooLowException::what() noexcept
{
    return "The grad is too Low";
}



std::iostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
}