/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:58:35 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/24 17:51:55 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Aform("PresidentialPardonForm", 25, 5), target("default")
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Aform("PresidentialPardonForm", 25, 5), target(target)
{
    std::cout << "PresidentialPardonForm target constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Aform(copy), target(copy.target)
{
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
    *this = copy;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
    std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
    if (this != &copy)
    {
    }
    return (*this);
}

void    PresidentialPardonForm::execute(Bureaucrat &Bureaucrat) const
{
    if (!this->get_is_signed())
        throw Aform::FormNotSignedException();
    if (Bureaucrat.getGrade() < this->get_exec_grade() || Bureaucrat.getGrade() < this->get_sign_grade())
        throw Aform::GradeTooLowException();
    std::cout << this->target << " has been pardoned by Zafod Beeblebrox" << std::endl;
}