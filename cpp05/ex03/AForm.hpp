/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:09:15 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/16 18:28:22 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#include <string>

class Bureaucrat;

class AForm
{
    protected:
        const std::string name;
        bool isSigned;
        const int gradToSign;
        const int gradToExec;
    public :
        AForm();
        AForm(std::string n, bool isS, int gTs, int gTe);
        AForm (const AForm &other);
        const AForm &operator=(const AForm &other);
        ~AForm();
        const std::string &getName() const;
        bool getIsSigned() const;
        int getGradToSign() const;
        int getGradToExec() const;
        void    beSigned(const Bureaucrat &bureaucrat);
        void    execute(Bureaucrat const & executor) const;
        virtual void    execAction(Bureaucrat const & executor) const = 0;
        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException();
                virtual const char *what() const throw();
        };
        class GradeTooLowExecException : public std::exception
        {
            public:
                GradeTooLowExecException();
                virtual const char *what() const throw();
        };
        class FormNotSigned : public std::exception
        {
            public:
                FormNotSigned();
                virtual const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, const AForm &form);

#endif