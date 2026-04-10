/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/10 16:44:30 by kkoujan           #+#    #+#             */
/*   Updated: 2026/04/10 16:53:25 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template<typename T> void swap(T& a, T& b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
template<typename T> T min(T a, T b)
{
	if (a > b)
		return b;
	return a;
}
template<typename T> T max(T a, T b)
{
	if (a < b)
		return b;
	return a;	
}

#endif