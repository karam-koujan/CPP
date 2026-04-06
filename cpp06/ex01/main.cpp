/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 20:12:53 by kkoujan           #+#    #+#             */
/*   Updated: 2026/04/06 20:27:36 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include <iostream>
int main()
{
	Data d;
	uintptr_t ui =  Serializer::serialize(&d);
	Data *d_ptr = Serializer::deserialize(ui);
	std::cout << "original ptr " << &d << " deserialized ptr " << d_ptr << std::endl;
}