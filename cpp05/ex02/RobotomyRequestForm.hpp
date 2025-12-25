/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:22:27 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/25 10:38:35 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    public :
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(std::string t);
        RobotomyRequestForm(const RobotomyRequestForm &other);
        const RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
        void  execAction(Bureaucrat const & executor) const;
        class RobotomyFailed : public std::exception
        {
            public :
                RobotomyFailed();
                const char *what() const throw();
        };
};

#endif