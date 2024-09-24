/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:20:46 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/24 17:45:06 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include   "Bureaucrat.hpp"
# include   "AForm.hpp"
# include   "ShrubberyCreationForm.hpp"
# include   "RobotomyRequestForm.hpp"
# include   "PresidentialPardonForm.hpp"
# include   "Intern.hpp"

int main(void)
{
    Intern SomeRandomIntern;
    Bureaucrat  bureaucrat("bureaucrat", 145);
    Aform   *randomform1 = NULL;
    Aform   *randomform2 = NULL;
    Aform   *randomform3 = NULL;
    Aform   *randomform4 = NULL;

    std::cout << "\n\ntry robotomy request" << std::endl;
    try
    {
        randomform1 = SomeRandomIntern.makeForm("robotomy request", "Bender");
        bureaucrat.signForm(*randomform1);
        bureaucrat.executeForm(*randomform1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n\ntry presidential pardon" << std::endl;
    try
    {
        randomform2 = SomeRandomIntern.makeForm("presidential pardon", "Bender");
        bureaucrat.signForm(*randomform2);
        bureaucrat.executeForm(*randomform2);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n\ntry shrubbery creation" << std::endl;
    try
    {
        randomform3 = SomeRandomIntern.makeForm("shrubbery creation", "Bender");
        bureaucrat.signForm(*randomform3);
        bureaucrat.executeForm(*randomform3);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << "\n\ntry invalid form" << std::endl;
    try
    {
        randomform4 = SomeRandomIntern.makeForm("invalid form", "Bender");
        bureaucrat.signForm(*randomform4);
        bureaucrat.executeForm(*randomform4);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    std::cout << std::endl << std::endl;
    delete randomform1;
    delete randomform2;
    delete randomform3;
    delete randomform4;
}
