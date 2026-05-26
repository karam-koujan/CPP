/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:19:13 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/26 10:43:27 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"


void    print_err(std::string msg)
{
    std::cerr << "Error: " << msg << std::endl;
}


int read_csv(std::string filename, std::map<std::string, float> btc_db)
{
    std::ifstream  inFile(filename);
    if (!inFile.is_open())
    {
        print_err("cannot read file");
        return 1;
    }
    std::string line;
    while (!std::getline(inFile))
    {
        if (line.empty()) continue;
        line << inFile;
        std::stringstream lineStream(line);
        std::string key;
        std::string value;
        if (std::getline(lineStream, key, ',')) {
            
            std::getline(lineStream, value);
            std::cout << "Key:   [" << key << "]\n";
            std::cout << "Value: [" << value << "]\n";
            std::cout << "---------------------\n";
        }
    }
    return 0;
}