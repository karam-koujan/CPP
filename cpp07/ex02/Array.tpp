/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 21:10:14 by kkoujan           #+#    #+#             */
/*   Updated: 2026/04/11 21:44:54 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>

Array::Array()
{
	arr = new T[0];
	len = 0;
}

Array::Array(unsigned int n)
{
	arr = new T[n];
	len = n;
}

Array::Array(const &Array other)
{
	unsigned int i = 0;
	arr = new T[other.len];
	len = other.len
	while (i < len)
	{
		arr[i] = other.arr[i];
		i++;	
	}
}
Array &Array::operator=(const &Array other)
{
	if (this != &other)
	{
		unsigned int i = 0;
		arr = new T[other.len];
		len = other.len
		while (i < len)
		{
			arr[i] = other.arr[i];
			i++;	
		}
	}
	return *this;
}

T Array::operator[](unsigned int idx)
{
		if (idx >= len)
		{
			throw std::out_of_range("Index " + std::to_string(idx) + " is out of bounds!");
		}
		return arr[idx];
}
unsigned int Array::size()
{
	return len;	
}


Array::~Array()
{
	delete[] arr;
}
