/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:48:40 by kkoujan           #+#    #+#             */
/*   Updated: 2025/10/07 08:50:01 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"


float   cross_product(const Point &a, const Point &b)
{
    float cp = a.getX() * b.getY() - a.getY() * b.getX();
    std::cout<< "cross product :" << cp << std::endl;
    return (cp);
}

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    const Point ab = Point(b.getX() - a.getX(), b.getY() - a.getY());
    const Point bc = Point(c.getX() - b.getX(), c.getY() - b.getY());
    const Point ca = Point(a.getX() - c.getX(), a.getY() - c.getY());
    const Point bp = Point(point.getX() - b.getX(), point.getY() - b.getY());
    const Point cp = Point(point.getX() - c.getX(), point.getY() - c.getY());
    const Point ap = Point(point.getX() - a.getX(), point.getY() - a.getY());
    if (cross_product(ab, ap) > 0 && cross_product(bc, bp) > 0 && cross_product(ca, cp) > 0)
        return true;
    else if (cross_product(ab, ap) < 0 && cross_product(bc, bp) < 0 && cross_product(ca, cp) < 0)
        return true;
    return false;
}