/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 13:23:12 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/05 13:38:39 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <vector>

template <typename T>
class MutantStack
{
    private:
        std::vector<T> stack;
    public:
        MutantStack();
        MutantStack(int initial_size);
        ~MutantStack();
        MutantStack(const MutantStack<T> &other);
        MutantStack<T> &operator=(const MutantStack<T> &other);
        void    push(T element);
        void    pop();
        size_t size();
        T      top();
        bool    empty();
};