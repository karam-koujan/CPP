/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:37:34 by kkoujan           #+#    #+#             */
/*   Updated: 2026/04/13 14:42:43 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <exception>

class NotFoundException : public std::exception {
public:
    virtual const char* what() const throw() {
        return "Element not found in container";
    }
};

template <typename T>
T::iterator easyfind(T& container, int toFind);

#include "easyfind.tpp"

#endif