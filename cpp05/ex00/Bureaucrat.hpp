/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 08:23:34 by kkoujan           #+#    #+#             */
/*   Updated: 2026/07/31 10:06:38 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>

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
        class GradeTooHighException : public std::exception
        {
            public :
				const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public :
				const char *what() const throw();
        };        
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif