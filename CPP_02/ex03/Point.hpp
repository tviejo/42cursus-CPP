/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:54:36 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 13:57:48 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

# include <iostream>
# include <cmath>

class Point
{
    private:
        Fixed const x;
        Fixed const y;
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &copy);
        Point &operator=(const Point &copy);
        ~Point();
        Fixed getX(void) const;
        Fixed getY(void) const;     
};

#endif