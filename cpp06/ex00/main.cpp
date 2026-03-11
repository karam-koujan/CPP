/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 23:04:55 by kkoujan           #+#    #+#             */
/*   Updated: 2026/03/11 23:27:24 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
    if (argc != 2) {
        std::cerr << "invalid input" << std::endl;
        return 1;
    }
    std::string input = std::string(argv[1]);
    ScalarConverter::convert(input);

    return 0;
}