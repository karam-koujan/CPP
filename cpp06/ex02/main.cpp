/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 20:49:35 by kkoujan           #+#    #+#             */
/*   Updated: 2026/04/06 21:10:18 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstdlib>

Base * generate(void)
{
	int d = rand() % 3;
	if (d == 0)
	{
		return new A();
	}
	if (d == 1)
	{
		return new B();
	}
	if (d == 2)
	{
		return new C();
	}
}

void identify(Base* p);

void identify(Base& p);

int main()
{
	
}