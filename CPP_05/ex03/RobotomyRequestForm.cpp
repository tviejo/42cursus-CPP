/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:58:35 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/25 14:31:08 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Aform("RobotomyRequestForm", 72, 45), target("default")
{
    std::cout << "RobotomyRequestForm default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Aform("RobotomyRequestForm", 72, 45), target(target)
{
    std::cout << "RobotomyRequestForm target constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Aform(copy), target(copy.target)
{
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
    *this = copy;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy)
{
    std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
    if (this != &copy)
    {
    }
    return (*this);
}

void    RobotomyRequestForm::execute(Bureaucrat &Bureaucrat) const
{
    if (!this->get_is_signed())
        throw Aform::FormNotSignedException();
    if (Bureaucrat.getGrade() > this->get_exec_grade() || Bureaucrat.getGrade() > this->get_sign_grade())
        throw Aform::GradeTooLowException();
    std::cout << "drilling noises" << std::endl;
    srand(time(NULL));
    if (rand() % 2 == 1)
        std::cout << this->target << " has been robotomized successfully" << std::endl;
    else
        std::cout << this->target << " Robotomization failed" << std::endl;
}