/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:52:35 by kkoujan           #+#    #+#             */
/*   Updated: 2025/10/07 08:56:55 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(): x(0), y(0){};
Point::Point(const float a, const float b): x(a), y(b){
    std::cout<< "copy constructor" << std::endl;
};
Point::Point(const Point &other): x(other.x), y(other.y){
        std::cout<< "default constructor" << std::endl;
};
Point &Point::operator=(Point &other)
{
    (void)other;
    return *this;
}
Point::~Point()
{
    std::cout<< "the obj is destroyed" << std::endl;
}
float Point::getX() const
{
    return x.toFloat();
}
float  Point::getY() const
{
    return y.toFloat();
}
