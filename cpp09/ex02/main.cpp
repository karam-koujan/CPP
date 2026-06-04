/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 10:05:42 by kkoujan           #+#    #+#             */
/*   Updated: 2026/06/04 10:06:50 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Error: No input provided." << std::endl;
        return 1;
    }
    PmergeMe merge;
    try
    {
        merge.parseInput(argv[1]);        
    }
    catch(std::exception &e)
    {
        std::cerr << e.what() << std::endl;        
    }
    // merge.sortDeque(arr);
    // for(size_t i = 0; i < arr.size(); ++i)
    // {
    //     std::cout << arr[i] << " ";
    // }
    // std::cout << std::endl;
    return 0;
}