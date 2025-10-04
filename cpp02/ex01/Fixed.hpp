/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:27:20 by kkoujan           #+#    #+#             */
/*   Updated: 2025/10/04 11:02:04 by kkoujan          ###   ########.fr       */
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
        int getRawBits (void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt( void ) const;        
};
std::ostream &operator<<(std::ostream &out, Fixed const &obj);
#endif