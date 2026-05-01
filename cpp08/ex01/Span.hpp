/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:46:59 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/01 18:48:36 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


 #ifndef SPAN_HPP
 #define SPAN_HPP

 #include <vector>

class Span
{
    private :
        unsigned int n;
        std::vector<int> vec;
    public :
        Span();
        ~Span();
        Span(unsigned int N);
        Span(const Span &other);
        const Span &operator=(const Span &other);
        void    addNumber(int number);
        long    shortestSpan();
        long    longestSpan();  
};

 #endif