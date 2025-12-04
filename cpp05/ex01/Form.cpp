/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:46:11 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/04 12:34:02 by kkoujan          ###   ########.fr       */
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


