/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:22:27 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/16 16:26:49 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
    private :
        std::string target;
    public :
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(std::string t);
        RobotomyRequestForm(const RobotomyRequestForm &other);
        const RobotomyRequestForm &operator=(const RobotomyRequestForm &other);
        void  execAction(Bureaucrat const & executor) const;

};

#endif