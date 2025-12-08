/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 12:09:15 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/08 15:24:52 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FORM_HPP
#define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Form
{
    private :
        const std::string name;
        bool isSigned;
        const int gradToSign;
        const int gradToExec;
    public :
        Form();
        Form(std::string n, bool isS, int gTs, int gTe);
        Form (const Form &other);
        const Form &operator=(const Form &other);
        ~Form();
        const std::string &getName() const;
        bool getIsSigned() const;
        const int getGradToSign() const;
        const int getGradToExec() const;
        void    beSigned(const Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif