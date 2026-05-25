/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 08:50:31 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/25 11:01:46 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>
#include "MutantStack.hpp"

int main() {
    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << "top element: " << mstack.top() << std::endl;

    mstack.pop();

    std::cout << "stack size after pop: " << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;
    std::cout << "Iterating through MutantStack contents:" << std::endl;
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }
    
    // Testing compatibility with standard stack construction
    std::stack<int> s(mstack);

    std::cout << "Test on List" << std::endl;
    std::list<int> mlist;

    mlist.push_back(5);
    mlist.push_back(17);

    std::cout << "back element: " << mlist.back() << std::endl;

    mlist.pop_back();

    std::cout << "list size after pop: " << mlist.size() << std::endl;

    mlist.push_back(3);
    mlist.push_back(5);
    mlist.push_back(737);
    mlist.push_back(0);

    std::list<int>::iterator lit = mlist.begin();
    std::list<int>::iterator lite = mlist.end();

    ++lit;
    --lit;
    std::cout << "iterating through std::list contents:" << std::endl;
    while (lit != lite) {
        std::cout << *lit << std::endl;
        ++lit;
    }

    return 0;
}