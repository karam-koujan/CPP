/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 17:59:10 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/16 18:05:07 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern
{
    public :
        Intern();
        ~Intern();
        Intern(const Intern &other);
        const Intern &operator=(const Intern &other);
        AForm *makeForm(std::string formName, std::string target);
};


#endif