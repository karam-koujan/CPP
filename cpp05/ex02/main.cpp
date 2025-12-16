/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:29:30 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/16 15:45:33 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    /*
    - first normal test 
    - not sign the form
    - do a low grad to sign
    */
   try
   {
       Bureaucrat a = Bureaucrat("b1", 2);
       ShrubberyCreationForm f = ShrubberyCreationForm();
       a.signForm(f);
       a.executeForm(f);
   }
   catch(const std::exception& e)
   {
        std::cerr << e.what() << std::endl;
   }
}