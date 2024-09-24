/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:57:29 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/24 15:27:07 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_H
# define PRESIDENTIALPARDONFORM_H

# include <string>
# include <iostream>
# include <fstream>  
# include <exception>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class PresidentialPardonForm : public Aform
{
    private:
        std::string const   target;
    protected:
    public:
        ~PresidentialPardonForm();
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &copy);
        void    execute(Bureaucrat &Bureaucrat) const;
};

# endif