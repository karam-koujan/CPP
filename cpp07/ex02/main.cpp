/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 22:15:03 by kkoujan           #+#    #+#             */
/*   Updated: 2026/04/11 22:47:44 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main()
{
	Array<int> *arr = new Array<int>(5);
	Array<int> arr1 = *arr;
	Array<int> arr2;
	arr2 = *arr;
	(*arr)[0] = 5;
	std::cout << "size : " << arr->size() << std::endl;
	try
	{
		std::cout << "arr element : " << (*arr)[0] << std::endl;
		std::cout << "arr1 element : " << arr1[0] << std::endl;
		std::cout << "arr2 element : " << arr2[0] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	
	delete arr;	
}