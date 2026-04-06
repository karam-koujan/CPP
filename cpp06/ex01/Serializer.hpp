/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 19:48:34 by kkoujan           #+#    #+#             */
/*   Updated: 2026/04/06 20:11:59 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <ctype>
#include "Data.hpp"

class Serializer
{
    public :
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
	private :
        Serializer();
        Serializer(const Serializer &other);
        Serializer &operator=(const Serializer &other);
        ~Serializer();
};

#endif