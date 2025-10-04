/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:13:31 by kkoujan           #+#    #+#             */
/*   Updated: 2025/10/04 13:43:57 by kkoujan          ###   ########.fr       */
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
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number)
{
    _integer = roundf(number * (1 << _fraction_bits));
    std::cout << "Float constructor called" << std::endl;
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
        this->_integer = other.getRawBits();
    }
    return *this;    
}

int Fixed::getRawBits(void) const
{
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

std::ostream &operator<<(std::ostream &out, Fixed const &obj)
{
    out << obj.toFloat();
    return (out);
}

bool Fixed::operator<(const Fixed &other)
{
    return (this->_integer < other.getRawBits());
}

bool Fixed::operator>(const Fixed &other)
{
    return (this->_integer > other.getRawBits());
}

bool Fixed::operator<=(const Fixed &other)
{
    return (this->_integer <= other.getRawBits());
}

bool Fixed::operator>(const Fixed &other)
{
    return (this->_integer >= other.getRawBits());
}

Fixed Fixed::operator+(const Fixed &other)
{
    Fixed result;
    result.setRawBits(this->_integer + other.getRawBits());
    return result;
}

Fixed Fixed::operator-(const Fixed &other)
{
    Fixed result;
    result.setRawBits(this->_integer - other.getRawBits());
    return result;
}

Fixed Fixed::operator*(const Fixed &other)
{
    Fixed result;
    result.setRawBits(this->_integer + other.getRawBits());
    return result;
}