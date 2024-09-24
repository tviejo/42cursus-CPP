/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:20:46 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/24 16:45:10 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include   "Bureaucrat.hpp"
# include   "AForm.hpp"
# include   "ShrubberyCreationForm.hpp"
# include   "RobotomyRequestForm.hpp"
# include   "PresidentialPardonForm.hpp"

int main(void)
{
    std::cout << "\n\ntry to execute a form with a grade too low" << std::endl;
    try
    {
        Bureaucrat  bureaucrat("bureaucrat", 0);
        ShrubberyCreationForm shrubbery("home");
        bureaucrat.signForm(shrubbery);
        bureaucrat.executeForm(shrubbery);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n\ntry to execute a form with a grade too high" << std::endl;
    try
    {
        Bureaucrat  bureaucrat("bureaucrat", 151);
        ShrubberyCreationForm shrubbery("home");
        bureaucrat.signForm(shrubbery);
        bureaucrat.executeForm(shrubbery);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n\ntry to execute a form without signing it" << std::endl;
    try
    {
        Bureaucrat  bureaucrat("bureaucrat", 145);
        ShrubberyCreationForm shrubbery("home");
        bureaucrat.executeForm(shrubbery);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n\ntry to execute a form with a good grade" << std::endl;
    try
    {
        Bureaucrat  bureaucrat("bureaucrat", 145);
        ShrubberyCreationForm shrubbery("home");
        bureaucrat.signForm(shrubbery);
        bureaucrat.executeForm(shrubbery);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n\ntry to execute a RobotomyRequestForm with a good grade" << std::endl;
    try
    {
        Bureaucrat  bureaucrat("bureaucrat", 72);
        RobotomyRequestForm robotomy("home");
        bureaucrat.signForm(robotomy);
        bureaucrat.executeForm(robotomy);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n\ntry to execute a PresidentialPardonForm with a good grade" << std::endl;
    try
    {
        Bureaucrat  bureaucrat("bureaucrat", 25);
        PresidentialPardonForm presidential("home");
        bureaucrat.signForm(presidential);
        bureaucrat.executeForm(presidential);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}
