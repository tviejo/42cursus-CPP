/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:18:24 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/30 14:54:46 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

template <typename T, typename F>
void    iter(T* array, int length, F f)
{
    for (int i = 0; i < length; i++) {
        f(array[i]);
    }
}

template <typename T, typename F>
void    iter(const T* array, int length, F f)
{
    for (int i = 0; i < length; i++) {
        f(array[i]);
    }
}

template <typename T, typename F>
void    iter(const T* array, int length, const F f)
{
    for (int i = 0; i < length; i++) {
        f(array[i]);
    }
}

template <typename T, typename F>
void    iter(T* array, int length, const F f)
{
    for (int i = 0; i < length; i++) {
        f(array[i]);
    }
}

template <typename T, typename F>
void    iter(T* array, const int length, F f)
{
    for (int i = 0; i < length; i++) {
        f(array[i]);
    }
}

template <typename T, typename F>
void    iter(const T* array, const int length, F f)
{
    for (int i = 0; i < length; i++) {
        f(array[i]);
    }
}

template <typename T, typename F>
void const   iter( T* array, int length,  F f)
{
    for (int i = 0; i < length; i++) {
        f(array[i]);
    }
}

#endif