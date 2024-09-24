/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:57:29 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/24 17:43:20 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Intern.hpp"

Intern::Intern()
{
    std::cout << "Intern default constructor called" << std::endl;
}
Intern::~Intern()
{
    std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(const Intern &copy)
{
    std::cout << "Intern copy constructor called" << std::endl;
    *this = copy;
}

Intern &Intern::operator=(const Intern &copy)
{
    std::cout << "Copy assignment operator Intern called" << std::endl;
    if (this != &copy)
    {
    }
    return (*this);
}

Aform *Intern::makeForm(std::string name, std::string target)
{
    std::string form_names[NB_FORMS] = {"shrubbery", "robotomy", "presidential"};

    for (int i = 0; i < NB_FORMS; i++)
    {
        if (name.find(form_names[i]) != std::string::npos)
        {
            std::cout << "Intern creates " << name << std::endl;
            switch (i)
            {
                case SHUBBERY:
                    return (new ShrubberyCreationForm(target));
                case ROBOTOMY:
                    return (new RobotomyRequestForm(target));
                case PRESIDENTIAL:
                    return (new PresidentialPardonForm(target));
            }
        }
    }
    throw Intern::InvalidForm();
    return (NULL);
}