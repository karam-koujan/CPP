/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/11 18:56:53 by kkoujan           #+#    #+#             */
/*   Updated: 2026/04/11 19:28:35 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename A, typename B, typename C> void iter(A *array, const B length, void (*func)(C&))
{
	int i = -1;
	while (++i < length)
	{
		func(array[i]);
	}
}


#endif