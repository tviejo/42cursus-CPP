/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:45:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/02 20:03:55 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RPN.hpp"

RPN::RPN(void)
{
    this->_result = 0;
}

RPN::~RPN(void)
{
}

RPN::RPN(const RPN &src)
{
    *this = src;
}

RPN &RPN::operator=(const RPN &src)
{
    if (this != &src)
    {
        this->_stack = src._stack;
        this->_result = src._result;
    }
    return (*this);
}

float   RPN::calculate(std::string input)
{
    char token;

    for (long unsigned int i = 0; i < input.length(); i++)
    {
        token = input[i];
        if (token == '+')
            add();
        else if (token == '-')
            sub();
        else if (token == '*')
            mul();
        else if (token == '/')
            div();
        else if (token >= '0' && token <= '9')
            this->_stack.push(token - '0');
        else if (token == ' ')
            continue;
        else
        {
            throw std::invalid_argument("Error");
        }
    }
    return (this->_result);
}

void    RPN::add()
{
    int b = this->_stack.top();
    this->_stack.pop();
    int a = this->_stack.top();
    this->_stack.pop();
    if (SHOWDEBUG == 1)
        std::cout << a << " + " << b << " = " << a + b << std::endl;
    this->_result = a + b;
    this->_stack.push(this->_result);
}

void    RPN::sub()
{
    int b = this->_stack.top();
    this->_stack.pop();
    int a = this->_stack.top();
    this->_stack.pop();
    if (SHOWDEBUG == 1)
        std::cout << a << " - " << b << " = " << a - b << std::endl;
    this->_result = a - b;
    this->_stack.push(this->_result);
}

void    RPN::mul()
{
    int b = this->_stack.top();
    this->_stack.pop();
    int a = this->_stack.top();
    this->_stack.pop();
    if (SHOWDEBUG == 1)
        std::cout << a << " * " << b << " = " << a * b << std::endl;
    this->_result = a * b;
    this->_stack.push(this->_result);
}

void    RPN::div()
{
    int b = this->_stack.top();
    this->_stack.pop();
    if (b == 0)
        throw std::invalid_argument("division by zero");
    int a = this->_stack.top();
    this->_stack.pop();
    if (SHOWDEBUG == 1)
        std::cout << a << " / " << b << " = " << a / b << std::endl;
    this->_result = a / b;
    this->_stack.push(this->_result);
}
