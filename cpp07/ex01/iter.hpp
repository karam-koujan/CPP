/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 18:56:53 by kkoujan           #+#    #+#             */
/*   Updated: 2026/04/11 19:43:05 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename A> void iter(A *array, const int length, void (*func)(A&))
{
	int i = -1;
	while (++i < length)
	{
		func(array[i]);
	}
}

template <typename A> void iter(A *array, const int length, void (*func)(const A&))
{
	int i = -1;
	while (++i < length)
	{
		func(array[i]);
	}
}

#endif