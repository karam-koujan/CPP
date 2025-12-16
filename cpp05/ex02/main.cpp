/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/16 15:29:30 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/16 16:00:55 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
   try
   {
       Bureaucrat a = Bureaucrat("b1", 180);
       ShrubberyCreationForm f = ShrubberyCreationForm("taget");
       a.signForm(f);
       a.executeForm(f);
   }
   catch(const std::exception& e)
   {
        std::cerr << e.what() << std::endl;
   }
}