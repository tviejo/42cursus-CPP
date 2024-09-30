/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:20:46 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/30 11:14:45 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include   "Bureaucrat.hpp"

int main(void)
{
    std::cout << "Test Bureaucrat with 160 grade" << std::endl;
    try
    {
        Bureaucrat b1("b1", 160);
        std::cout << b1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "Test Bureaucrat with 0 grade" << std::endl;
    try
    {
        Bureaucrat b2("b2", 0);
        std::cout << b2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "Test Bureaucrat with 150 grade" << std::endl;
    try
    {
        Bureaucrat b3("b3", 150);
        std::cout << b3 << std::endl;
        std::cout << "test decrement" << std::endl;
        b3.decrement();
        std::cout << b3 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "Test Bureaucrat with 1 grade" << std::endl;
    try
    {
        Bureaucrat b4("b4", 1);
        std::cout << b4 << std::endl;
        std::cout << "test increment" << std::endl;
        b4.increment();
        std::cout << b4 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << "Test Bureaucrat with 120 grade" << std::endl;
    try
    {
        Bureaucrat b5("b5", 120);
        std::cout << b5 << std::endl;
        std::cout << "test decrement" << std::endl;
        b5.decrement();
        std::cout << b5 << std::endl;
        std::cout << "test increment" << std::endl;
        b5.increment();
        std::cout << b5 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << std::endl;

    std::cout << "test deep copy constructor" << std::endl;
    Bureaucrat b6("b6", 100);
    Bureaucrat b7(b6);
    std::cout << b6 << std::endl;
    std::cout << b7 << std::endl;
    b6.increment();
    std::cout << b6 << std::endl;
    std::cout << b7 << std::endl;

    std::cout << "\n\ntest deep copy assignment operator" << std::endl;
    Bureaucrat b8("b8", 100);
    Bureaucrat b9("b9", 50);
    std::cout << b8 << std::endl;
    std::cout << b9 << std::endl;
    b9 = b8;
    std::cout << b8 << std::endl;
    std::cout << b9 << std::endl;
    b8.increment();
    std::cout << b8 << std::endl;
    std::cout << b9 << std::endl << std::endl;
}