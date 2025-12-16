/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 16:05:08 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/16 16:08:13 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
    private :
        std::string target;
    public :
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(std::string t);
        PresidentialPardonForm(const PresidentialPardonForm &other);
        const PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
        void  execAction(Bureaucrat const & executor) const;

};

#endif