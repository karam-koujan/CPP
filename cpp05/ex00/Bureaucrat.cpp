/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:36:38 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/04 11:39:16 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(): name("default")
{
    std::cout << "Bureaucrat default constructor" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Bureaucrat is destroyed" << std::endl;
}

Bureaucrat::Bureaucrat(std::string n, int g): name(n), grad(g)
{
    if (grad < 1)
        throw GradeTooHighException();
    if (grad > 150)
        throw GradeTooLowException();
    std::cout << "Bureaucrat parameter constructor" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): name(other.name), grad(other.grad)
{
    std::cout << "Bureaucrat copy constructor" << std::endl;
}

Bureaucrat  &Bureaucrat::operator=(const Bureaucrat &other)
{
    if (this != &other)
    {
        this->grad = other.grad;
    }
    std::cout << "assignement operator" << std::endl;
    return *this;
}

void    Bureaucrat::incrementGrad()
{
    if (grad <= 1)
        throw GradeTooHighException();
    grad--;
}

void    Bureaucrat::decrementGrad()
{
    if (grad >= 150)
        throw GradeTooLowException();
    grad++;
}

const std::string &Bureaucrat::getName() const
{
    return this->name;
}

int Bureaucrat::getGrade() const
{
    return this->grad;
}

Bureaucrat::GradeTooHighException::GradeTooHighException()
{
    std::cout << "GradeTooHighException" << std::endl;
}

Bureaucrat::GradeTooLowException::GradeTooLowException()
{
    std::cout << "GradeTooHighException" << std::endl;
}


const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "The grad is too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "The grad is too Low";
}



std::ostream &operator<<(std::ostream &out,  Bureaucrat const &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return out;
}