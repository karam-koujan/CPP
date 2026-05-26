/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/26 10:20:22 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/26 11:01:49 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <string>
#include <iostream>
#include <map>
#include <fstream>
#include <sstream>

class BitcoinExchange
{
    private:
        std::map<std::string, float> data_db;
    
    public :
        BitcoinExchange();
       ~BitcoinExchange();
        BitcoinExchange(BitcoinExchange &other);
        BitcoinExchange &operator=(BitcoinExchange &other);
        std::map<std::string, float> get_data_db() const;
}


void    print_err(std::string msg);
#endif