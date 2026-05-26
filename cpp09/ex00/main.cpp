/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:16:00 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/26 11:25:42 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac != 2)
    {
        print_err("could not open file.");
        return 1;
    }
    try
    {
        BitcoinExchange bex("data.csv");
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;
        return 1;
    }
    (void)av;
}