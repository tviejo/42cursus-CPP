/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:41:01 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/29 18:57:45 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
private:
    T *array;
    unsigned int const _size;
public:
    Array();
    Array(unsigned int n);
    Array(Array const &src);
    Array &operator=(Array const &rhs);
    ~Array();
    T &operator[](unsigned int index);
    unsigned int size() const;
};

# endif