/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:19:13 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/26 13:13:25 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(const std::string &filename) 
{
    std::ifstream  inFile(filename.c_str());
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
    
    return *this;
}

bool isValidDate(std::string &date)
{
    if (date[4] != '-' || date[4] != '-' ) return false;
    size_t i = 0;
    int size=0;
    while (i < date.length())
    {
        if (isdigit(date[i]))
        {
            size++;
        }
        if (i == 4 || i == 7){
          i++;
          size++;
          continue;   
        }
        if (!isdigit(date[i]) && !isspace(date[i])) return false;
        i++; 
    }
    if (size != 10)  return false;
    return true;
}

void   BitcoinExchange::process_input(const std::string &filename)
{
    std::ifstream  inFile(filename.c_str());
    if (!inFile.is_open())
    {
        throw std::runtime_error("Error: could not open file " + filename);
    }
    std::string line;
    int file_offset = 0;
    while (std::getline(inFile, line))
    {
        if (line.empty()) continue;
        std::stringstream lineStream(line);
        std::string key;

        std::string value;
        if (std::getline(lineStream, key, '|')) {
            
            if (!std::getline(lineStream, value))
            {
                print_err("empty value");
                continue;
            }
        if (file_offset == 0 && value != " value" && key != "date ")
        {
                print_err("the input file should start with date | value");
                file_offset++;
                continue ;
                
        }
        if (!isValidDate(key))
        {
            print_err("bad input => " + key);
            file_offset++;
            continue;
        }
            std::stringstream vs(value);
            float vf;
            vs >> vf;
            if (vf > 1000.0f)
            {
                print_err("too large number");
            }
            if (vf < 0.0f)
            {
                print_err("not a positive number");
            }
        }
        file_offset++;
    }
    inFile.close();  
}


void    print_err(std::string msg)
{
    std::cerr << "Error: " << msg << std::endl;
}
