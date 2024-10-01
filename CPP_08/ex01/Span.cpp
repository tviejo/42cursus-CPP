/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:05:56 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/01 13:26:26 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

Span::Span(void) : _n(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Span::Span(unsigned int n) : _n(n)
{
    std::cout << "Unsigned int constructor called" << std::endl;
}

Span::Span(Span const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
}

Span & Span::operator=(Span const & src)
{
    std::cout << "Assignation operator called" << std::endl;
    if (this != &src)
    {
        _n = src._n;
        _array = src._array;
    }
    return *this;
}

Span::~Span(void)
{
    std::cout << "Destructor called" << std::endl;
}

int     Span::longestSpan()
{
    std::vector<int> tmp = _array;
    if (_array.size() < 2)
        throw std::out_of_range("Not enough numbers to calculate span");
    std::sort(tmp.begin(), tmp.end());
    return tmp.back() - tmp.front();
}

int     Span::shortestSpan()
{
    int min = INT_MAX;
    std::vector<int> tmp = _array;
    if (_array.size() < 2)
        throw std::out_of_range("Not enough numbers to calculate span");
    std::sort(tmp.begin(), tmp.end());
    for (unsigned int i = 0; i < tmp.size() - 1; i++)
    {
        if (tmp[i + 1] - tmp[i] < min)
            min = tmp[i + 1] - tmp[i];
    }
    return min;
}

void    Span::addNumber(int nb)
{
    _array.push_back(nb);
}

void    Span::addVector(std::vector<int> &v)
{
    if (_array.size() + v.size() > _n)
        throw std::out_of_range("Not enough space to add vector");
    else
        _array.insert(_array.end(), v.begin(), v.end());
}

void    Span::addVectorRange(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (_array.size() + std::distance(begin, end) > _n)
        throw std::out_of_range("Not enough space to add vector");
    else
        _array.insert(_array.end(), begin, end);
}

