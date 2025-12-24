/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:24:36 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/24 14:42:38 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
   try
   {
       Bureaucrat a = Bureaucrat("b1", 2);
       Bureaucrat b = Bureaucrat("b2", 124);
       std::cout << a << std::endl;
       std::cout << b << std::endl;
       Form f = Form("f1", 0, 122, 1);
       b.signForm(f);
       b.signForm(f);
   }
   catch(const std::exception& e)
   {
        std::cerr << e.what() << std::endl;
   }
}