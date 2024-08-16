/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 10:59:38 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 14:07:00 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"

Point::Point() : x(Fixed()), y(Fixed())
{
}

Point::Point(const float x, const float y) : x(Fixed(x)), y(Fixed(y))
{
}

Fixed Point::getX(void) const
{
    return (x);
}

Fixed Point::getY(void) const
{
    return (y);
}

Point &Point::operator=(const Point &copy)
{
    const_cast<Fixed&>(x) = copy.getX();
    const_cast<Fixed&>(y) = copy.getY();
    return (*this);
}

Point::Point(const Point &copy) : x(copy.getX()), y(copy.getY())
{
}
 
Point::~Point()
{
}