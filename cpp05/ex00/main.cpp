/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:24:36 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/15 09:52:47 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
   try
   {
       Bureaucrat a = Bureaucrat("b1", 2);
       Bureaucrat b = Bureaucrat("b2", 120);
       std::cout << a << std::endl;
       std::cout << b << std::endl;
       a.incrementGrad();
       b.decrementGrad();
       std::cout << a << std::endl;
       std::cout << b << std::endl;
       a.incrementGrad();
   }
   catch(const std::exception& e)
   {
        std::cerr << e.what() << std::endl;
   }
}