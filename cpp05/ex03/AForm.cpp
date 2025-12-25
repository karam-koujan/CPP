/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:46:11 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/16 14:22:13 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"


AForm::AForm(): name("default"), isSigned(false), gradToSign(1), gradToExec(1), target("")
{
    std::cout << "AForm default constructor" << std::endl;
}

AForm::AForm(std::string n, bool isS, int gTs, int gTe, std::string tar): name(n), isSigned(isS), gradToSign(gTs), gradToExec(gTe), target(tar)
{
    if (gradToSign < 1 || gradToExec < 1)
        throw AForm::GradeTooHighException();
    if (gradToSign > 150 || gradToExec > 150)
        throw AForm::GradeTooLowException();
    std::cout << "AForm parameter constructor" << std::endl;
}

AForm::AForm(const AForm &other): name(other.name), isSigned(other.isSigned), gradToSign(other.gradToSign), gradToExec(other.gradToExec), target(other.target)
{
    if (gradToSign < 1 || gradToExec < 1)
        throw AForm::GradeTooHighException();
    if (gradToSign > 150 || gradToExec > 150)
        throw AForm::GradeTooLowException();
    std::cout << "AForm copy constructor " << std::endl;
}


const AForm &AForm::operator=(const AForm &other)
{
    if (this != &other)
    {
        this->isSigned = other.isSigned;
        this->target = other.target;
    }
    std::cout << "AForm assignmenet operator" << std::endl;
    return *this;
}


AForm::~AForm()
{
    std::cout << "AForm is destroyed" << std::endl;
}

const std::string &AForm::getName() const
{
    return this->name;
}

bool AForm::getIsSigned() const
{
    return this->isSigned;
}

int AForm::getGradToSign() const
{
    return this->gradToSign;
}

int AForm::getGradToExec() const
{
    return this->gradToExec;
}

AForm::GradeTooLowException::GradeTooLowException()
{
    std::cout << "AForm GradeTooLowException" << std::endl;
}

AForm::GradeTooHighException::GradeTooHighException()
{
    std::cout << "Form GradeTooHighException" << std::endl;
}

const char *AForm::GradeTooHighException::what() const throw()
{
    return "The form grade is too high" ;
}

const char *AForm::GradeTooLowException::what() const throw()
{
    return "The grade is too low" ;
}

AForm::GradeTooLowExecException::GradeTooLowExecException()
{
    std::cout << "AForm GradeTooLowExecException" << std::endl;
}

const char *AForm::GradeTooLowExecException::what() const throw()
{
    return "The grade is too low to execute an action" ;
}

AForm::FormNotSigned::FormNotSigned()
{
    std::cout << "FormNotSigned" << std::endl;
}

const char *AForm::FormNotSigned::what() const throw()
{
    return "The Form you are trying to execute is not signed" ;
}

void    AForm::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() <= this->getGradToSign())
        this->isSigned = 1;
    else
        throw AForm::GradeTooLowException();
}

std::string AForm::getTarget() const
{
    return this->target;
}
void    AForm::execute(Bureaucrat const & executor) const
{
    if (!this->isSigned)
        throw AForm::FormNotSigned();
    if (!(executor.getGrade() <= this->gradToExec))
        throw AForm::GradeTooLowExecException();
}


std::ostream &operator<<(std::ostream &out, const AForm &AForm)
{
    out << "name :" << AForm.getName() << std::endl;
    out << "gradToSign :" << AForm.getGradToSign() << std::endl;
    out << "gradToExec :" << AForm.getGradToExec() << std::endl;
    return out;
}