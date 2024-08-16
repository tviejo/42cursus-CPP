/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:33:23 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 13:37:32 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"
#include <iostream>


bool bsp( Point const a, Point const b, Point const c, Point const point);

void test(int a1, int a2, int b1, int b2, int c1, int c2, int d1, int d2)
{
    Point a = Point(a1, a2);
    Point b = Point(b1, b2);
    Point c = Point(c1, c2);
    Point d = Point(d1, d2);
    std::cout << "Point a: " << a.getX() << " " << a.getY() << std::endl;
    std::cout << "Point b: " << b.getX() << " " << b.getY() << std::endl;
    std::cout << "Point c: " << c.getX() << " " << c.getY() << std::endl;
    std::cout << "Point d: " << d.getX() << " " << d.getY() << std::endl;
    if (bsp(a, b, c, d) == true)
        std::cout << "Point d is inside the triangle abc." << std::endl;
    else
        std::cout << "Point d is outside the triangle abc." << std::endl;
}
int main( void )
{
    test(0, 0, 4, 0, 0, 4, 0, 0);
    test(0, 0, 4, 0, 0, 4, -1, 0);
    test(0, 0, 4, 0, 0, 4, 2, 0);
    test(0, 0, 4, 0, 0, 4, 2, 2);
    test(0, 0, 4, 0, 0, 4, 1, 1);
}