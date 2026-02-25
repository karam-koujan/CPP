/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 09:36:38 by kkoujan           #+#    #+#             */
/*   Updated: 2026/02/25 17:16:51 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(): name("default"), grad(0)
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
    if (grad < 1)
        throw GradeTooHighException();
    if (grad > 150)
        throw GradeTooLowException();
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

Bureaucrat::GradeTooHighException::~GradeTooHighException() throw()
{
    std::cout << "GradeTooHighException is destroyed" << std::endl; 
}

Bureaucrat::GradeTooHighException::GradeTooHighException(const Bureaucrat::GradeTooHighException &other)
{
    (void)other;
    std::cout << "GradeTooHighException copy constructor" << std::endl; 
}

Bureaucrat::GradeTooHighException& Bureaucrat::GradeTooHighException::operator=(const Bureaucrat::GradeTooHighException &other)
{
        std::cout << "GradeTooHighException copy assignment" << std::endl;
        (void)other;
        return *this;
}


Bureaucrat::GradeTooLowException::GradeTooLowException()
{
    std::cout << "GradeTooLowException" << std::endl;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() throw()
{
    std::cout << "GradeTooLowException is destroyed" << std::endl; 
}

Bureaucrat::GradeTooLowException::GradeTooLowException(const Bureaucrat::GradeTooLowException &other)
{
    (void)other;
    std::cout << "GradeTooLowException copy constructor" << std::endl; 
}

Bureaucrat::GradeTooLowException& Bureaucrat::GradeTooLowException::operator=(const Bureaucrat::GradeTooLowException &other)
{
        (void)other;
        std::cout << "GradeTooLowException copy assignment" << std::endl;
        return *this;
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
    return "The grad is too High";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
    return "The grad is too Low";
}

void    Bureaucrat::signForm(Form &f)
{
    try
    {
        f.beSigned(*this);
        std::cout << this->name << " signed " << f.getName() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->name << " couldn't sign " << f.getName() << " because " << e.what() << std::endl;
    }
    
}

std::ostream &operator<<(std::ostream &out,  Bureaucrat const &bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
    return out;
}