/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:46:11 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/15 10:22:28 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(): name("default"), isSigned(false), gradToSign(1), gradToExec(1)
{
    std::cout << "Form default constructor" << std::endl;
}

Form::Form(std::string n, bool isS, int gTs, int gTe): name(n), isSigned(isS), gradToSign(gTs), gradToExec(gTe)
{
    if (gradToSign < 1 || gradToExec < 1)
        throw Bureaucrat::GradeTooHighException();
    if (gradToSign > 150 || gradToExec > 150)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Form parameter constructor" << std::endl;
}

Form::Form(const Form &other): name(other.name), isSigned(other.isSigned), gradToSign(other.gradToSign), gradToExec(other.gradToExec)
{
    std::cout << "Form copy constructor " << std::endl;
}


const Form &Form::operator=(const Form &other)
{
    if (this != &other)
    {
        this->isSigned = other.isSigned;
    }
    std::cout << "Form assignmenet operator" << std::endl;
    return *this;
}


Form::~Form()
{
    std::cout << "Form destructor is called" << std::endl;
}

const std::string &Form::getName() const
{
    return this->name;
}

bool Form::getIsSigned() const
{
    return this->isSigned;
}

int Form::getGradToSign() const
{
    return this->gradToSign;
}

int Form::getGradToExec() const
{
    return this->gradToExec;
}

Form::GradeTooLowException::GradeTooLowException()
{
    std::cout << "Form GradeTooLowException" << std::endl;
}

const char *Form::GradeTooLowException::what() const throw()
{
    std::cout << "The grade is too low" << std::endl;
}

void    Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->getGradToSign())
        this->isSigned = 1;
    else
        Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "name :" << form.getName() << std::endl;
    out << "gradToSign :" << form.getGradToSign() << std::endl;
    out << "gradToExec :" << form.getGradToExec() << std::endl;
    return out;
}