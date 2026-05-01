/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 11:46:59 by kkoujan           #+#    #+#             */
/*   Updated: 2026/05/01 20:27:37 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


 #ifndef SPAN_HPP
 #define SPAN_HPP

 #include <vector>

class Span
{
    private :
        unsigned int n;
        unsigned int size;
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
        class FullSpanException : public std::exception
        {
            public:
                virtual const char* what() const throw() {
                    return "The span is full";
                }            
        };
        class NoSpanException : public std::exception
        {
            public:
                virtual const char* what() const throw() {
                    return "No Span is found";
                }            
        };
};

 #endif