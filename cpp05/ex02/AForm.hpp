/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:09:15 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/25 11:07:50 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#include <string>

class Bureaucrat;

class AForm
{
    private:
        const std::string name;
        bool isSigned;
        const int gradToSign;
        const int gradToExec;
        std::string target;
    public :
        AForm();
        AForm(std::string n, bool isS, int gTs, int gTe, std::string tar);
        AForm (const AForm &other);
        const AForm &operator=(const AForm &other);
        virtual ~AForm();
        const std::string &getName() const;
        bool getIsSigned() const;
        int getGradToSign() const;
        int getGradToExec() const;
        std::string getTarget() const;
        void    beSigned(const Bureaucrat &bureaucrat);
        void    execute(Bureaucrat const & executor) const;
        virtual void    execAction(Bureaucrat const & executor) const = 0;
        class GradeTooLowException : public std::exception
        {
            public:
                GradeTooLowException();
                const char *what() const throw();
        };
        class GradeTooHighException : public std::exception
        {
            public:
                GradeTooHighException();
                const char *what() const throw();
        };
        class GradeTooLowExecException : public std::exception
        {
            public:
                GradeTooLowExecException();
                const char *what() const throw();
        };
        class FormNotSigned : public std::exception
        {
            public:
                FormNotSigned();
                const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &out, const AForm &form);

#endif