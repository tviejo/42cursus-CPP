/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:51:20 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/01 11:01:00 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Array.hpp"
# include "Array.ttp"
# include <iostream>
# include <string>
# include <stdlib.h>
# include <exception>
# include <cstdio>

int main(void)
{
    Array<int> intArray(5);
    Array<std::string> stringArray(5);

    std::cout << "intArray size: " << intArray.size() << std::endl;
    std::cout << "stringArray size: " << stringArray.size() << std::endl;

    std::cout << "\n\nsetting intArray values" << std::endl;
    for (unsigned int i = 0; i < intArray.size(); i++)
    {
        intArray[i] = i;
        std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;
    }

    std::cout << "\n\nsetting stringArray values" << std::endl;
    for (unsigned int i = 0; i < stringArray.size(); i++)
    {
        char string[10];
        sprintf(string, "string%d", i);
        stringArray[i] = string;
        std::cout << "stringArray[" << i << "] = " << stringArray[i] << std::endl;
    }

    std::cout << "\n\ntrying to access out of range index" << std::endl;
    try
    {
        intArray[5] = 42;
    }
    catch (std::exception &e)
    {
        std::cout << "caught exception: " << e.what() << std::endl;
    }

    std::cout << "\n\ncreate size 0 array" << std::endl;
    Array<int> emptyArray;

    std::cout << "\n\ntry to access index 0" << std::endl;
    try
    {
        emptyArray[0] = 42;
    }
    catch (std::exception &e)
    {
        std::cout << "caught exception: " << e.what() << std::endl;
    }

    std::cout << "\n\ntest copy constructor" << std::endl;
    {
        Array<int> copyArray(intArray);
        std::cout << "copyArray size: " << copyArray.size() << std::endl;
        for (unsigned int i = 0; i < copyArray.size(); i++)
            std::cout << "copyArray[" << i << "] = " << copyArray[i] << std::endl;
    }
    
    std::cout << "\n\ntest assignment operator" << std::endl;
    {
        Array<int> assignArray = intArray;
        std::cout << "assignArray size: " << assignArray.size() << std::endl;
        for (unsigned int i = 0; i < assignArray.size(); i++)
            std::cout << "assignArray[" << i << "] = " << assignArray[i] << std::endl;
    }

    std::cout << "\n\ntest with complex type" << std::endl;
    {
        Array<std::string> complexArray(2);
        complexArray[0] = "hello";
        complexArray[1] = "world";
        for (unsigned int i = 0; i < complexArray.size(); i++)
            std::cout << "complexArray[" << i << "] = " << complexArray[i] << std::endl;
    }

    std::cout << "\n\ntest with complex type: Data" << std::endl;
    {
        Array<Data> dataArray(2);
        dataArray[0].s1 = "hello";
        dataArray[0].s2 = "world";
        dataArray[0].n = 42;
        dataArray[1].s1 = "I am";
        dataArray[1].s2 = "tviejo";
        dataArray[1].n = 23;
        for (unsigned int i = 0; i < dataArray.size(); i++)
            std::cout << "dataArray[" << i << "] = " << dataArray[i].s1 << ", " << dataArray[i].s2 << ", " << dataArray[i].n << std::endl;
    }

    return (0);
}