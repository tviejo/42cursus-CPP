/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:30:14 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/29 19:40:15 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <vector>
# include <exception>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
    if (std::find(container.begin(), container.end(), value) != container.end())
        return std::find(container.begin(), container.end(), value);
    else
    {
        throw std::out_of_range("value not found");
    }
}

# endif