/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 13:58:35 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/24 17:21:00 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Aform("ShrubberyCreationForm", 145, 137, false), target("default")
{
    std::cout << "ShrubberyCreationForm default constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Aform("ShrubberyCreationForm", 145, 137, false), target(target)
{
    std::cout << "ShrubberyCreationForm target: " << target << " constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Aform(copy), target(copy.target)
{
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
    *this = copy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy)
{
    std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
    if (this != &copy)
    {
    }
    return (*this);
}

void    PrintAsciiTrees(std::ofstream &file)
{
    file << "        _^_ " << std::endl;
    file << "       /~~~\\ " << std::endl;
    file << "      /~~ ~~\\" << std::endl;
    file << "     /~~   ~~\\" << std::endl;
    file << "    /~~     ~~\\" << std::endl;
    file << "   /~~       ~~\\" << std::endl;
    file << "  /~~         ~~\\" << std::endl;
    file << " /______   ______\\" << std::endl;
    file << "        |||" << std::endl;
    file << "        |||" << std::endl;
}

void    ShrubberyCreationForm::execute(Bureaucrat &Bureaucrat) const
{
    if (!this->get_is_signed())
        throw Aform::FormNotSignedException();
    if (Bureaucrat.getGrade() < this->get_exec_grade() || Bureaucrat.getGrade() < this->get_sign_grade())
        throw Aform::GradeTooLowException();
    std::ofstream file((this->target + "_shrubbery").c_str());
    for (int i = 0; i < 3; i++)
        PrintAsciiTrees(file);
    file.close();
    std::cout << "file " << this->target << "_shrubbery created" << std::endl;
}