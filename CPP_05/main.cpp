/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:20:46 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/24 11:30:44 by tviejo           ###   ########.fr       */
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
        std::cout << b1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "Test Bureaucrat with -1 grade" << std::endl;
    try
    {
        Bureaucrat b2("b2", -1);
        std::cout << b2 << std::endl;
        std::cout << b2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "Test Bureaucrat with 150 grade" << std::endl;
    try
    {
        Bureaucrat b3("b3", 150);
        std::cout << b3 << std::endl;
        std::cout << "test increment" << std::endl;
        b3.increment();
        std::cout << b3 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << "Test Bureaucrat with 0 grade" << std::endl;
    try
    {
        Bureaucrat b4("b4", 0);
        std::cout << b4 << std::endl;
        std::cout << "test decrement" << std::endl;
        b4.decrement();
        std::cout << b4 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
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
        std::cerr << e.what() << '\n';
    }
    std::cout << std::endl;
}