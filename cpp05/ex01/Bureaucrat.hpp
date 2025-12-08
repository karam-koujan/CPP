/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 08:23:34 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/08 15:26:25 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class Bureaucrat
{
    private:
        const std::string name;
        int grad;
    public :
        Bureaucrat();
        Bureaucrat(std::string name, int grad);
        Bureaucrat(const Bureaucrat &other);
        Bureaucrat &operator=(const Bureaucrat &other);
        ~Bureaucrat();
        const std::string &getName() const;
        int getGrade() const;
        void    incrementGrad();
        void    decrementGrad();
        void    signForm(Form &f);
        class GradeTooHighException : public std::exception
        {
            public :
                GradeTooHighException();
				virtual const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public :
                GradeTooLowException();
				virtual const char *what() const throw();
        };        
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif