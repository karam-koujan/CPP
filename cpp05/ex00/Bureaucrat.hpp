/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 08:23:34 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/04 09:49:41 by kkoujan          ###   ########.fr       */
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
        const std::string &getGrade() const;
        void    incrementGrad();
        void    decrementGrad();
        class GradeTooHighException : std::exception
        {
            GradeTooHighException();
            GradeTooHighException(int grad);
        };
        friend class GradeTooHighException;
        class GradeTooLowException : std::exception
        {
            private :
                int grad;
            GradeTooLowException();
            GradeTooLowException(int grad);
        };
        friend class GradeTooLowException;
        
};

std::iostream &operator<<(std::ostream &out, Bureaucrat &bureaucrat);

#endif