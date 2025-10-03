/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:13:31 by kkoujan           #+#    #+#             */
/*   Updated: 2025/10/03 11:47:11 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed():_integer(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
    _integer = number << _fraction_bits;
}

Fixed::Fixed(const float number)
{
    _integer = roundf(number * (1 << _fraction_bits));
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other): _integer(other._integer)
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
    {
        std::cout << "Copy assignment operator called" << std::endl;
        this->getRawBits();
    }
    return *this;    
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _integer;
}


int Fixed::toInt(void) const
{
    return _integer >> _fraction_bits;
}

float Fixed::toFloat(void) const
{
    float result = (float)_integer / (1 << _fraction_bits);
    return result;
}