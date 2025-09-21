/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 09:40:02 by kkoujan           #+#    #+#             */
/*   Updated: 2025/09/21 14:03:14 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>


int main(int ac, char **av)
{
    if (ac != 2)
    {
        std::cerr << "Invalid Arguments" << std::endl;
        return (1);
    }
    Harl harl = Harl();
    
    harl.complain(av[1]);
}