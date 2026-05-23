/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:33:48 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/23 08:49:04 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack():stack()
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
        stack.push_back(element);
}

template <typename T>
void    MutantStack<T>::pop()
{
    if (!this->empty())
        stack.pop_back();
}

template <typename T>
size_t    MutantStack<T>::size()
{
    return stack.size();
}

template <typename T>
T    MutantStack<T>::top()
{
    return stack.back();
}

template <typename T>
bool    MutantStack<T>::empty()
{
    if (stack.size() != 0)
    {
        return false;
    }
    return true;
}