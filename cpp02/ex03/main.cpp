/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/02 11:48:43 by kkoujan           #+#    #+#             */
/*   Updated: 2025/10/07 08:36:29 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Point.hpp"

int main( void ) {
    
    Point a(7, 7);
    Point b(11, 1);
    Point c(2, 2);

    Point pInside(7, 3);
    Point pOutside(12, 3);
    Point Pedge(7, 7);

    std::cout << "Inside: " << bsp(a, b, c, pInside) << std::endl;
    std::cout << "Outside: " << bsp(a, b, c, pOutside) << std::endl;
    std::cout << "On edge: " << bsp(a, b, c, Pedge) << std::endl;
}
