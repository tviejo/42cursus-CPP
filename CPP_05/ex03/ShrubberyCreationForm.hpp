/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:57:29 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/24 14:47:03 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_H
# define SHRUBBERYCREATIONFORM_H

# include <string>
# include <iostream>
# include <fstream>  
# include <exception>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Aform
{
    private:
        std::string const   target;
    protected:
    public:
        ~ShrubberyCreationForm();
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &copy);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &copy);
        void    execute(Bureaucrat &Bureaucrat) const;
};

# endif