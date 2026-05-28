/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 06:46:02 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/28 05:52:43 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"


int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "the program should have one argument" << std::endl;
        return 1;
    }
    RPN R;
    std::string seq = av[1];
    try
    {
        int result = R.calculation(seq);
        std::cout << result << std::endl;        
    }catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
}