/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 19:17:04 by kkoujan           #+#    #+#             */
/*   Updated: 2026/04/11 19:41:46 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include <iostream>

void	print_arr(int &ele)
{
	std::cout << ele << std::endl;
}

void	print_float(const float &ele)
{
	std::cout << ele << std::endl;
}

void	print_const_arr(const int &ele)
{
	std::cout << ele << std::endl;
}

int main()
{
	int arr[] = {1,3,4,5,8};
	float f[] = {1.6,3.6,4.6,5.6,8.6};

	const int len = 5;
	iter(arr, len, print_arr);
	iter(arr, len, print_const_arr);
	iter(f, len, print_float);

}