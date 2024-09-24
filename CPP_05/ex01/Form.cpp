/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:44:10 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/24 13:03:28 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Form.hpp"

Form::Form() : name("default"), sign_grade(0), exec_grade(0)
{
    this->is_signed = false;
    std::cout << "default Constructor Called" << std::endl;
}

Form::Form(int sign_grade, int exec_grade, bool is_signed) : name("default"), sign_grade(sign_grade), exec_grade(exec_grade)
{
    if (sign_grade < 0 || exec_grade < 0)
        throw Form::GradeTooLowException();
    else if (sign_grade > 150 || exec_grade > 150)
        throw Form::GradeTooHighException();
    this->is_signed = is_signed;
    std::cout << "default Constructor Called" << std::endl;
}

Form::Form(std::string name, int sign_grade, int exec_grade, bool is_signed) : name(name), sign_grade(sign_grade), exec_grade(exec_grade)
{
    if (sign_grade < 0 || exec_grade < 0)
        throw Form::GradeTooLowException();
    else if (sign_grade > 150 || exec_grade > 150)
        throw Form::GradeTooHighException();
    this->is_signed = is_signed;
    std::cout << "default Constructor Called" << std::endl;
}

Form::~Form()
{
    std::cout << "Form Destructor Called" << std::endl;
}

Form &Form::operator=(const Form &copy)
{
    std::cout << "Copy assignment operator Form called" << std::endl;
    if (this != &copy)
    {
        this->is_signed = copy.is_signed;
    }
    return (*this);
}

Form::Form(const Form &copy) : name(copy.name), sign_grade(copy.sign_grade), exec_grade(copy.exec_grade)
{
    this->is_signed = copy.is_signed;
    std::cout << "Copy constructor Form called" << std::endl;
    *this = copy;
}

void Form::beSigned(Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() < this->sign_grade)
        throw Form::GradeTooLowException();
    this->is_signed = true;
}
std::string Form::get_name() const
{
    return (this->name);
}

bool Form::get_is_signed() const
{
    return (this->is_signed);
}

int Form::get_exec_grade() const
{
    return (this->exec_grade);
}

int Form::get_sign_grade() const
{
    return (this->sign_grade);
}

std::ostream &operator<<(std::ostream &out, Form& Form)
{
    out << "Form name: " << Form.get_name() << std::endl;
    out << "Form sign grade: " << Form.get_sign_grade() << std::endl;
    out << "Form exec grade: " << Form.get_exec_grade() << std::endl;
    out << "Form is signed: " << Form.get_is_signed() << std::endl;
    return (out);
}

