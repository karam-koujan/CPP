/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:19:13 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/26 11:04:38 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"




#include "BitcoinExchange.hpp"

// Default Constructor
BitcoinExchange::BitcoinExchange() 
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
            data_db[key] = value;
        }
    }
}

BitcoinExchange::~BitcoinExchange() 
{}

// Copy Constructor
BitcoinExchange::BitcoinExchange(const BitcoinExchange &other) 
{
    *this = other;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &other) 
{
    if (this != &other) 
    {
        this->data_db = other.data_db;
    }
    
    // 3. Return the existing object to allow chaining (e.g., a = b = c)
    return *this;
}



void    print_err(std::string msg)
{
    std::cerr << "Error: " << msg << std::endl;
}
