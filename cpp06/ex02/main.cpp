/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 20:49:35 by kkoujan           #+#    #+#             */
/*   Updated: 2026/04/06 22:36:45 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include "Base.hpp"
#include <cstdlib>
#include <iostream>

Base *generate(void)
{
	srand(1337);
	int d = rand() % 3;
	if (d == 0)
	{
		return new A();
	}
	if (d == 1)
	{
		return new B();
	}
	
	return new C();
}

void identify(Base* p)
{
	A* a = dynamic_cast<A *>(p);
	if (a != nullptr)
	{
		std::cout << "A" << std::endl;
	}
	B* b = dynamic_cast<B *>(p);
	if (b != nullptr)
	{
		std::cout << "B" << std::endl;
	}

	C* c = dynamic_cast<C *>(p);
	if (c != nullptr)
	{
		std::cout << "C" << std::endl;
	}
}

void identify(Base& p)
{
	try
	{
		dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;	
	}catch(const std::exception& e){
		(void)(e);
	}
	try
	{
		dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;	
	}catch(const std::exception& e){
		(void)(e);
	}
	try
	{
		dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;	
	}catch(const std::exception& e){
		(void)(e);
	}
	

}

int main()
{
	Base *b = generate();
	identify(b);
	identify(*b);
}