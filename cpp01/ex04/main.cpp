/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 13:58:43 by kkoujan           #+#    #+#             */
/*   Updated: 2025/09/20 14:27:14 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "The program takes only 3 parameters" << std::endl;
        return 1;
    }
    std::string filepath = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
    std::string line;
    std::ifstream file(filepath);
    if (file.fail())
    {
        std::cerr << "Something is wrong" << std::endl;
        return 1;
    }
    while (std::getline(file, line))
        std::cout << line << std::endl;
    file.close();
    return (0);
}