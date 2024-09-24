/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:20:46 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/24 13:41:49 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include   "Bureaucrat.hpp"
# include   "Form.hpp"

int main(void)
{
    std::cout << "Test Form with 160 grade" << std::endl;
    try
    {
        Form f1("f1", 160, 160, false);
        std::cout << f1 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Test Form with -1 grade" << std::endl;
    try
    {
        Form f2("f2", -1, -1, false);
        std::cout << f2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }

    std::cout << "Test make bureaucrat sign form" << std::endl;
    try
    {
        Bureaucrat b1("b1", 150);
        std::cout << b1 << std::endl;
        Form f3("f3", 150, 150, false);
        std::cout << f3 << std::endl;
        f3.beSigned(b1);
        b1.signForm(f3.get_name(), "reason", f3.get_is_signed());
        std::cout << f3 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl; 
    }

    std::cout << std::endl << std::endl << "Test make bureaucrat sign form with too low grade" << std::endl;
    Bureaucrat b2("b2", 50);
    std::cout << b2 << std::endl;
    Form f4("f4", 100, 100, false);
    std::cout << f4 << std::endl;
    try
    {
        f4.beSigned(b2);
        b2.signForm(f4.get_name(), "reason", f4.get_is_signed());
        std::cout << f4 << std::endl;
    } 
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl; 
    }
}