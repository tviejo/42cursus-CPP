/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 16:57:34 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/24 17:43:13 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef INTERN_H
# define INTERN_H

# include <string>
# include <iostream>
# include <exception>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

# define NB_FORMS 3
# define SHUBBERY 0
# define ROBOTOMY 1
# define PRESIDENTIAL 2

class Intern
{
    private:
    protected:
    public:
        ~Intern();
        Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &copy);
        Aform *makeForm(std::string name, std::string target);
        class InvalidForm : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Invalid form");
                }
        };
};

# endif