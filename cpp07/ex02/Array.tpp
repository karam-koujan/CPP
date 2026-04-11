/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 21:10:14 by kkoujan           #+#    #+#             */
/*   Updated: 2026/04/11 22:40:03 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <stdexcept>

template<typename T>
Array<T>::Array()
{
	arr = new T[0];
	len = 0;
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	arr = new T[n];
	len = n;
}

template<typename T>
Array<T>::Array(const Array<T> &other)
{
	unsigned int i = 0;
	arr = new T[other.len];
	len = other.len;
	while (i < len)
	{
		arr[i] = other.arr[i];
		i++;	
	}
}

template<typename T>
Array<T> &Array<T>::operator=(const Array<T> &other)
{
	if (this != &other)
	{
		unsigned int i = 0;
		delete[] arr;
		arr = new T[other.len];
		len = other.len;
		while (i < len)
		{
			arr[i] = other.arr[i];
			i++;	
		}
	}
	return *this;
}

template<typename T>
T &Array<T>::operator[](unsigned int idx)
{
		if (idx >= len)
		{
			throw std::out_of_range("Index out of bounds!");
		}
		return arr[idx];
}

template<typename T>
unsigned int Array<T>::size() const
{
	return len;	
}

template<typename T>
Array<T>::~Array()
{
	delete[] arr;
}
