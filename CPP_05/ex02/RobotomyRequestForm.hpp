/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:57:29 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/24 15:28:07 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_H
# define ROBOTOMYREQUESTFORM_H

# include <string>
# include <iostream>
# include <fstream>  
# include <exception>
# include "AForm.hpp"
# include "Bureaucrat.hpp"

class RobotomyRequestForm : public Aform
{
    private:
        std::string const   target;
    protected:
    public:
        ~RobotomyRequestForm();
        RobotomyRequestForm();
        RobotomyRequestForm(std::string target);
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &copy);
        void    execute(Bureaucrat &Bureaucrat) const;
};

# endif