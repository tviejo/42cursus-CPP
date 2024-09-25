/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 10:06:25 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/25 15:58:17 by tviejo           ###   ########.fr       */
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
        if (isdigit(input[i]) == 0 && input[i] != '.' && input[i] != 'f' && input[i] != '-' && input[i] != '+')
            is_digit = false;
    }
    return (is_digit);
}

bool    check_if_char(std::string input)
{
    if (input.length() == 1 && isalpha(input[0]) != 0)
        return (true);
    return (false);
}

bool    check_if_pseudo(std::string input)
{
    if (input == "nan" || input == "-inff" || input == "+inff")
        return (true);
    if (input == "nanf" || input == "-inf" || input == "+inf")
        return (true);
    return (false);
}

void    print_char(std::string input)
{
    long long result = std::atoll(input.c_str());
    
    if (result > std::numeric_limits<char>::max() || result < std::numeric_limits<char>::min())
    {
        std::cout << "char: impossible" << std::endl;
        return ;
    }
    if (check_if_char(input) == true)
        std::cout << "char: " << input << std::endl;
    else if (check_if_digit(input) == false)
        std::cout << "char: impossible" << std::endl;
    else if (isprint(result) == 0)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(result) << std::endl;
}

void    print_int(std::string input)
{
    long long result = std::atoll(input.c_str());
    
    if (result > std::numeric_limits<int>::max() || result < std::numeric_limits<int>::min())
    {
        std::cout << "int: impossible" << std::endl;
        return ;
    }
    if (check_if_char(input) == true)
        std::cout << "int: " << static_cast<int>(input[0]) << std::endl;
    else if (check_if_digit(input) == false)
        std::cout << "int: impossible" << std::endl;
    else 
        std::cout << "int: " << result << std::endl;
}

void    print_float(std::string input)
{
    float result = std::atof(input.c_str());

    if (check_if_char(input) == true)
        std::cout << "float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
    else if (check_if_pseudo(input) == false && check_if_digit(input) == false)
        std::cout << "float: " << "impossible" << std::endl;
    else if (result == static_cast<int>(result) && result < 1000000)
        std::cout << "float: " << result << ".0f" << std::endl;
    else
        std::cout << "float: " << result << "f" << std::endl;
}

void    print_double(std::string input)
{
    double result = std::atof(input.c_str());

    if (check_if_char(input) == true)
        std::cout << "double: " << static_cast<double>(input[0]) << ".0" << std::endl;
    else if (check_if_pseudo(input) == false && check_if_digit(input) == false)
        std::cout << "float: " << "impossible" << std::endl;
    else if (result == static_cast<int>(result) && result < 1000000)
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