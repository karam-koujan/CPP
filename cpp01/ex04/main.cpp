/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 13:58:43 by kkoujan           #+#    #+#             */
/*   Updated: 2025/09/20 16:02:30 by kkoujan          ###   ########.fr       */
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
    std::ofstream outfile(filepath + ".replace");
    if (!file.is_open() || !outfile.is_open())
    {
        std::cerr << "Something is wrong" << std::endl;
        return 1;
    }
    size_t pos = 0;
    while (std::getline(file, line))
    {
        pos = 0;
        pos = line.find(s1, pos);
        std::cout << line;
        while (pos != std::string::npos)
        {
            line.erase(pos, s1.length());
            line.insert(pos, s2);
            outfile << line;
            pos = line.find(s1, pos);
        }
    }
    file.close();
    outfile.close();
    return (0);
}