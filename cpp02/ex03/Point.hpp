/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/06 10:40:07 by kkoujan           #+#    #+#             */
/*   Updated: 2025/10/06 13:52:51 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
    private:
        Fixed const x;
        Fixed const y;
        //anything else useful
    public:
        Point();
        Point(const float a, const float b);
        Point(const Point &other);
        Point &operator=(Point &other);
        ~Point();
        float getX() const;
        float getY() const;
};

#endif