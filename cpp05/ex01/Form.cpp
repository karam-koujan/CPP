/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:46:11 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/24 14:35:50 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form(): name("default"), isSigned(false), gradToSign(1), gradToExec(1)
{
    std::cout << "Form default constructor" << std::endl;
}

Form::Form(std::string n, bool isS, int gTs, int gTe): name(n), isSigned(isS), gradToSign(gTs), gradToExec(gTe)
{
    if (gradToSign < 1 || gradToExec < 1)
        throw Form::GradeTooHighException();
    if (gradToSign > 150 || gradToExec > 150)
        throw Form::GradeTooLowException();
    std::cout << "Form parameter constructor" << std::endl;
}

Form::Form(const Form &other): name(other.name), isSigned(other.isSigned), gradToSign(other.gradToSign), gradToExec(other.gradToExec)
{
    if (gradToSign < 1 || gradToExec < 1)
        throw Form::GradeTooHighException();
    if (gradToSign > 150 || gradToExec > 150)
        throw Form::GradeTooLowException();
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
    std::cout << "Form is destroyed" << std::endl;
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
    return "The form grade is too low" ;
}

Form::GradeTooHighException::GradeTooHighException()
{
    std::cout << "Form GradeTooHighException" << std::endl;
}

const char *Form::GradeTooHighException::what() const throw()
{
    return "The form grade is too high" ;
}

void    Form::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->getGradToSign())
        this->isSigned = 1;
    else
        throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Form &form)
{
    out << "name :" << form.getName() << std::endl;
    out << "gradToSign :" << form.getGradToSign() << std::endl;
    out << "gradToExec :" << form.getGradToExec() << std::endl;
    return out;
}