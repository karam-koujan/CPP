/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:19:13 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/26 11:31:11 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"




#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string &filename) 
{
    std::ifstream  inFile(filename);
    if (!inFile.is_open())
    {
        throw std::runtime_error("Error: could not open file " + filename);
    }
    std::string line;
    while (std::getline(inFile, line))
    {
        if (line.empty()) continue;
        std::stringstream lineStream(line);
        std::string key;
        std::string value;
        if (std::getline(lineStream, key, ',')) {
            
            std::getline(lineStream, value);
            std::stringstream vs(value);
            float vf;
            vs >> vf;
            data_db[key] = vf;            
        }
    }
    inFile.close();
}

BitcoinExchange::BitcoinExchange() 
{}
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
