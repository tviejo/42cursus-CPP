/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:06:25 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/25 12:05:04 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
    std::cout << "ScalarConverter constructor called" << std::endl;
}

ScalarConverter::~ScalarConverter()
{
    std::cout << "ScalarConverter destructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &copy)
{
    std::cout << "Copy assignment operator Aform called" << std::endl;
    if (this != &copy)
    {
    }
    return (*this);
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy)
{
    std::cout << "Copy constructor Aform called" << std::endl;
    *this = copy;
}

bool    check_if_digit(std::string input)
{
    bool    is_digit = true;

    for (int i = 0; input[i] ; i++)
    {
        if (isdigit(input[i]) == 0)
            is_digit = false;
    }
    return (is_digit);
}

void    print_char(std::string input)
{
    int result = std::atoi(input.c_str());
    
    if (check_if_digit(input) == false)
        std::cout << "char: impossible" << std::endl;
    else if (isprint(result) == 0)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(result) << std::endl;
}

void    print_int(std::string input)
{
    int result = std::atoi(input.c_str());

    if (check_if_digit(input) == false)
        std::cout << "int: impossible" << std::endl;
    else 
        std::cout << "int: " << result << std::endl;
}

void    print_float(std::string input)
{
    float result = std::atof(input.c_str());

    if (result == static_cast<int>(result))
        std::cout << "float: " << result << ".0f" << std::endl;
    else
        std::cout << "float: " << result << "f" << std::endl;
}

void    print_double(std::string input)
{
    double result = std::atof(input.c_str());

    if (result == static_cast<int>(result))
        std::cout << "double: " << result << ".0" << std::endl;
    else
        std::cout << "double: " << result << std::endl;
}

void    ScalarConverter::convert(std::string input)
{
    print_char(input);
    print_int(input);
    print_float(input);
    print_double(input);
}