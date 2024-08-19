/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 11:44:12 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/19 11:16:48 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Point.hpp"
# include "Fixed.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
    float Area = (b.getY().toFloat() - c.getY().toFloat()) * (a.getX().toFloat() - c.getX().toFloat()) + (c.getX().toFloat() - b.getX().toFloat()) * (a.getY().toFloat() - c.getY().toFloat());
    
    float s = ((b.getY().toFloat() - c.getY().toFloat()) * (point.getX().toFloat() - c.getX().toFloat()) + (c.getX().toFloat() - b.getX().toFloat()) * (point.getY().toFloat() - c.getY().toFloat())) / Area;
    
    float t = ((c.getY().toFloat() - a.getY().toFloat()) * (point.getX().toFloat() - c.getX().toFloat()) + (a.getX().toFloat() - c.getX().toFloat()) * (point.getY().toFloat() - c.getY().toFloat())) / Area;
    
    float diff = 1 - s - t;
    
    if (s <= 0 || s >= 1 || t <= 0 || t >= 1 || diff <= 0 || diff >= 1)
        return (false);
    else
        return (true);
}