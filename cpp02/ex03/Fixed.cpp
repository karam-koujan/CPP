/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 14:13:31 by kkoujan           #+#    #+#             */
/*   Updated: 2025/10/07 08:21:36 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>

Fixed::Fixed():_integer(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
    _integer = number << _fraction_bits;
    // std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number)
{
    _integer = roundf(number * (1 << _fraction_bits));
    // std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &other): _integer(other._integer)
{
    // std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &other)
{
    if (this != &other)
    {
        // std::cout << "Copy assignment operator called" << std::endl;
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
    return (this->_integer < other._integer);
}

bool Fixed::operator>(const Fixed &other)
{
    return (this->_integer > other._integer);
}

bool Fixed::operator<=(const Fixed &other)
{
    return (this->_integer <= other._integer);
}

bool Fixed::operator>=(const Fixed &other)
{
    return (this->_integer >= other._integer);
}

Fixed Fixed::operator+(const Fixed &other)
{
    Fixed result;
    result._integer = this->_integer + other._integer;
    return result;
}

Fixed Fixed::operator-(const Fixed &other)
{
    Fixed result;
    result._integer = this->_integer - other._integer;
    return result;
}

Fixed Fixed::operator*(const Fixed &other)
{
    Fixed result;
    long long r = this->_integer * other._integer;
    r >>= _fraction_bits;
    result._integer = r;
    return result;
}

Fixed Fixed::operator/(const Fixed &other)
{
    Fixed result;
    result._integer = (this->_integer << _fraction_bits) / other._integer;
    return result;
}
Fixed Fixed::operator++()
{
    this->_integer++;
    return *this;
}
Fixed Fixed::operator++(int)
{
    Fixed tmp = *this;
    this->_integer++;
    return tmp;
}

Fixed Fixed::operator--()
{
    this->_integer--;
    return *this;
}
Fixed Fixed::operator--(int)
{
    Fixed tmp = *this;
    this->_integer--;
    return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b)
{
    if (a._integer < b._integer)
        return a;
    else
        return b;
}
const Fixed &Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a._integer < b._integer)
        return a;
    else
        return b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b)
{
    if (a._integer < b._integer)
        return b;
    else
        return a;
}
const Fixed &Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a._integer < b._integer)
        return b;
    else
        return a;
}