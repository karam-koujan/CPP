/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:48:01 by kkoujan           #+#    #+#             */
/*   Updated: 2026/04/13 14:55:12 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>
#include "easyfind.hpp"
#include <algorithm>
#include <iostream>

int main() {
    std::vector<int> v;
    v.push_back(10);
    v.push_back(20);

	try
	{
		std::vector<int>::iterator it = easyfind(v, 10);
		std::cout << *it << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
    return 0;
}