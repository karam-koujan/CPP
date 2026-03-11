/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 21:35:15 by kkoujan           #+#    #+#             */
/*   Updated: 2026/03/11 23:55:44 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <iostream>

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& other) {
    *this = other; 
}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other) {
    (void)other;
    return *this;
}

ScalarConverter::~ScalarConverter() {}


void ScalarConverter::convert(std::string& literal) {
    double d = 0;
    char* endptr = NULL;

    if (literal.length() == 1 && !std::isdigit(literal[0])) {
        d = static_cast<double>(literal[0]);
    } else {
        d = std::strtod(literal.c_str(), &endptr);
        if (*endptr != '\0' && std::string(endptr) != "f") {
           std::cerr << "invalid input" << std::endl;
           return ;
        }
    }

    std::cout << "char: ";
    if (std::isnan(d) || std::isinf(d) || d < CHAR_MIN || d > CHAR_MAX) {
        std::cout << "impossible" << std::endl;
    } else if (!std::isprint(static_cast<char>(d))) {
        std::cout << "Non displayable" << std::endl;
    } else {
        std::cout << static_cast<char>(d) << std::endl;
    }

    std::cout << "int: ";
    if (std::isnan(d) || std::isinf(d) || d < INT_MIN || d > INT_MAX) {
        std::cout << "impossible" << std::endl;
    } else {
        std::cout << static_cast<int>(d) << std::endl;
    }
    std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(d) << "f" << std::endl;
    std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(d) << std::endl;
}