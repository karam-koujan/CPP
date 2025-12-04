/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/04 10:24:36 by kkoujan           #+#    #+#             */
/*   Updated: 2025/12/04 11:40:02 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"


int main()
{
    /*
    - first normal test 
    - then with low exception
    - then with higher exception
    - then try chaining types
    - then nesting
    */
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