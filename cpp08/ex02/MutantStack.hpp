/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:23:12 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/25 10:58:17 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
public:

    MutantStack();
    MutantStack(const MutantStack& other);
    MutantStack& operator=(const MutantStack& other);
    virtual ~MutantStack();
    
    typename MutantStack<T, Container>::iterator begin();
    typename MutantStack<T, Container>::iterator end();
    typename MutantStack<T, Container>::const_iterator begin() const;
    typename MutantStack<T, Container>::const_iterator end() const;
    typename MutantStack<T, Container>::reverse_iterator rbegin();
    typename MutantStack<T, Container>::reverse_iterator rend();
    typename MutantStack<T, Container>::const_reverse_iterator rbegin() const;
    typename MutantStack<T, Container>::const_reverse_iterator rend() const;
};

// Include the implementation file at the bottom of the header
#include "MutantStack.tpp"

#endif