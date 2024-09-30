/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:20:46 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/30 11:18:37 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include   "Bureaucrat.hpp"
# include   "Form.hpp"

int main(void)
{
    std::cout << "Test Form with 160 grade" << std::endl;
    try
    {
        Form f1("f1", 160, 160);
        std::cout << f1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Test Form with -1 grade" << std::endl;
    try
    {
        Form f2("f2", -1, -1);
        std::cout << f2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Test make bureaucrat sign form" << std::endl;
    try
    {
        Bureaucrat b1("b1", 100);
        std::cout << b1 << std::endl;
        Form f3("f3", 140, 140);
        std::cout << f3 << std::endl;
        b1.signForm(f3);
        std::cout << f3 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl; 
    }

    std::cout << std::endl << std::endl << "Test make form besigned" << std::endl;\
    try
    {
        Bureaucrat b1("b1", 100);
        std::cout << b1 << std::endl;
        Form f3("f3", 140, 140);
        std::cout << f3 << std::endl;
        f3.beSigned(b1);
        std::cout << f3 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << std::endl << std::endl << "Test make bureaucrat sign form with too low grade" << std::endl;
    Bureaucrat b2("b2", 50);
    std::cout << b2 << std::endl;
    Form f4("f4", 10, 10);
    std::cout << f4 << std::endl;
    try
    {
        b2.signForm(f4);
        std::cout << f4 << std::endl;
    } 
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl; 
    }

    std::cout << "\n\ntest deep copy constructor" << std::endl;
    Form f5("f5", 100, 100);
    Form f6(f5);
    std::cout << f5 << std::endl;
    std::cout << f6 << std::endl;

    std::cout << "\n\ntest deep copy assignment operator" << std::endl;
    Form f7("f7", 100, 100);
    Form f8("f8", 50, 50);
    std::cout << f7 << std::endl;
    std::cout << f8 << std::endl;
    f8 = f7;
    std::cout << f7 << std::endl;
    std::cout << f8 << std::endl;
}