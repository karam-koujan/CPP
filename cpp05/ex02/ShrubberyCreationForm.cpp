/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 14:29:56 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/16 15:03:31 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(): AForm("", 0, 145, 137),target("")
{
    std::cout << "Shrubbery default constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string t):AForm("", 0, 145, 137),target(t)
{
    std::cout << "Shrubbery parameter constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):AForm(other.name, other.isSigned, other.gradToSign, other.gradToExec),target(other.target)
{
    std::cout << "Shrubbery copy constructor" << std::endl;
}

const ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
    (void)other;
    std::cout << "Shrubbery copy assignment" << std::endl;
    return other;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "Shrubbery is destroyed" << std::endl;
}

void    ShrubberyCreationForm::execAction(Bureaucrat const & executor)
{
    try
    {
        this->execute(executor);
        std::ofstream targetFile(target + "_shrubbery");
        if (!targetFile.is_open())
        {
            std::cerr << "file is not open" << std::endl;
            return ;
        }
        targetFile << "        _-_ \n"
              "                            /~~   ~~\\\n"
              "                         /~~         ~~\\\n"
              "                        {               }\n"
              "                         \\  _-     -_  /\n"
              "                           ~  \\\\ //  ~\n"
              "                        _- -   | | _- _\n"
              "                          _ -  | |   -_\n"
              "                              // \\\\\n";

    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    
}
