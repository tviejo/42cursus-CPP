/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:06:19 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/01 13:25:42 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <climits>
# include <vector>
# include <algorithm>

class Span
{
    private:
        unsigned int _n;
        std::vector<int> _array;
    public:
        Span();
        Span(unsigned int n);
        Span(Span const & src);
        ~Span(void);
        Span & operator=(Span const & src);
        void addNumber(int number);
        void addVector(std::vector<int> &v);
        void addVectorRange(std::vector<int>::iterator begin, std::vector<int>::iterator end);
        int shortestSpan(void);
        int longestSpan(void);
};

#endif