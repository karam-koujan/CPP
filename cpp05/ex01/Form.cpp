/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 11:46:11 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/04 11:56:01 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <string>

class Form
{
    private :
        const std::string name;
        bool isSigned;
        const int gradToSign;
        const int gradToexec;
    public :
        Form();
        Form(std::string n, bool isS, int gTs, int gTe);
        Form (const Form &other);
        const Form &operator=(const Form &other);
        ~Form();
        const std::string &getName() const;
        bool 
};

#endif