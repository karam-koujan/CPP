/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:27:20 by kkoujan           #+#    #+#             */
/*   Updated: 2025/10/06 09:53:31 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
class Fixed
{
    private :
        int _integer;
        static const int _fraction_bits = 8;
    public :
        Fixed();
        Fixed(const Fixed &other);
        Fixed(const int number);
        Fixed(const float number);
        Fixed &operator=(const Fixed &other);
        ~Fixed();
        bool operator<(const Fixed &other);
        bool operator>(const Fixed &other);
        bool operator>=(const Fixed &other);
        bool operator<=(const Fixed &other);
        bool operator==(const Fixed &other);
        bool operator!=(const Fixed &other);
        Fixed operator+(const Fixed &other);
        Fixed operator-(const Fixed &other);
        Fixed operator*(const Fixed &other);
        Fixed operator/(const Fixed &other);
        Fixed operator++();
        Fixed operator++(int);
        Fixed operator--();
        Fixed operator--(int);
        int getRawBits (void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt( void ) const;
        static Fixed &min(Fixed &a, Fixed &b);
        static Fixed &max(Fixed &a, Fixed &b);
        static const Fixed &min(Fixed const &a, Fixed const &b);
        static const Fixed &max(Fixed const &a, Fixed const &b);
};
std::ostream &operator<<(std::ostream &out, Fixed const &obj);

#endif