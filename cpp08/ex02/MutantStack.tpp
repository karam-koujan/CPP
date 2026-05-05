/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:33:48 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/05 14:06:53 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack():stack(),left_space(0)
{}

template <typename T>
MutantStack<T>::MutantStack(int initial_size): stack(initial_size), left_space(0)
{}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &other): stack(other.stack), left_space(other.left_space)
{}

template <typename T>
MutantStack<T> &MutantStack<T>::MutantStack::operator=(const MutantStack<T> &other)
{
    if (this != &other)
    {
        this->stack = other->stack;
        this->stack = other->left_space;
    }
    return *this;
}


template <typename T>
void    MutantStack<T>::push(T element)
{
    if (left_space > 0)
    {
        stack[left_space - 1] = element;
        left_space--;
    }else
    {
        stack.push_back(element);
    }
}
