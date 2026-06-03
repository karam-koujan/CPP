/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 10:05:42 by kkoujan           #+#    #+#             */
/*   Updated: 2026/06/03 10:13:53 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int argc, char **argv) {
    if (argc < 2) {
        std::cerr << "Error: No input provided." << std::endl;
        return 1;
    }
    (void)argv;
    PmergeMe merge;
    std::vector<int> arr;
    arr.push_back(15);
    arr.push_back(0);
    arr.push_back(100);
    arr.push_back(10);
    arr.push_back(10);
    arr.push_back(1);

    
    merge.sortVector(arr);
    for(size_t i = 0; i < arr.size(); ++i)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}