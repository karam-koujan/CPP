/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 14:08:34 by kkoujan           #+#    #+#             */
/*   Updated: 2026/04/13 14:54:32 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <algorithm>

template <typename T>
typename T::iterator easyfind(T& container, int f) {
    typename T::iterator it = std::find(container.begin(), container.end(), f);

    if (it == container.end()) {
        throw NotFoundException();
    }
    return it;
}