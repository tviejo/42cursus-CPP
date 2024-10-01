/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 13:06:04 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/01 13:29:59 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Span.hpp"

int main(void)
{
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "\n\ntest deep copy assignator" << std::endl;
    {
        Span sp2 = sp;
        sp2.addNumber(100000);
        std::cout << "result of deep copy test: "<< sp.longestSpan() << std::endl;
    }
    std::cout << "result of deep copy test: "<< sp.longestSpan() << std::endl;

    std::cout << "\n\ntest deep copy constructor" << std::endl;
    {
        Span sp3(sp);
        sp3.addNumber(100000);
        std::cout << "result of deep copy test: "<< sp.longestSpan() << std::endl;
    }
    std::cout << "result of deep copy test: "<< sp.longestSpan() << std::endl;

    std::cout << "\n\ntest add whole vector" << std::endl;
    {
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        v.push_back(5);
        Span sp4(5);
        sp4.addVector(v);
        std::cout << "result of add whole vector test: "<< sp4.longestSpan() << std::endl;
    }

    std::cout << "\n\ntest add range o vector" << std::endl;
    {
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        v.push_back(5);
        Span sp5(5);
        sp5.addVectorRange(v.begin(), v.end() - 2);
        std::cout << "result of add range of vector test: "<< sp5.longestSpan() << std::endl;
    }
    return 0;
}