/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:33:48 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/05 14:01:04 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack()
{}

template <typename T>
MutantStack<T>::MutantStack(int initial_size): stack(initial_size)
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &other): stack(other.stack)
{}

template <typename T>
MutantStack<T> &MutantStack<T>::MutantStack::operator=(const MutantStack<T> &other)
{
    if (this != &other)
    {
        this->stack = other->stack;
    }
    return *this;
}


template <typename T>
void    MutantStack<T>::push(T element)
{
    
}
