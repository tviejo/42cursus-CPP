/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aform.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:44:10 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/24 13:03:28 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AForm.hpp"
# include "Bureaucrat.hpp"

Aform::Aform() : name("default"), sign_grade(0), exec_grade(0)
{
    this->is_signed = false;
    std::cout << "default Constructor Called" << std::endl;
}

Aform::Aform(int sign_grade, int exec_grade, bool is_signed) : name("default"), sign_grade(sign_grade), exec_grade(exec_grade)
{
    if (sign_grade < 0 || exec_grade < 0)
        throw Aform::GradeTooLowException();
    else if (sign_grade > 150 || exec_grade > 150)
        throw Aform::GradeTooHighException();
    this->is_signed = is_signed;
    std::cout << "default Constructor Called" << std::endl;
}

Aform::Aform(std::string name, int sign_grade, int exec_grade, bool is_signed) : name(name), sign_grade(sign_grade), exec_grade(exec_grade)
{
    if (sign_grade < 0 || exec_grade < 0)
        throw Aform::GradeTooLowException();
    else if (sign_grade > 150 || exec_grade > 150)
        throw Aform::GradeTooHighException();
    this->is_signed = is_signed;
    std::cout << "default Constructor Called" << std::endl;
}

Aform::~Aform()
{
    std::cout << "Aform Destructor Called" << std::endl;
}

Aform &Aform::operator=(const Aform &copy)
{
    std::cout << "Copy assignment operator Aform called" << std::endl;
    if (this != &copy)
    {
        this->is_signed = copy.is_signed;
    }
    return (*this);
}

Aform::Aform(const Aform &copy) : name(copy.name), sign_grade(copy.sign_grade), exec_grade(copy.exec_grade)
{
    this->is_signed = copy.is_signed;
    std::cout << "Copy constructor Aform called" << std::endl;
    *this = copy;
}

void Aform::beSigned(const Bureaucrat &bureaucrat)
{
    if (bureaucrat.getGrade() < this->sign_grade)
        throw Aform::GradeTooLowException();
    this->is_signed = true;
}

std::string Aform::get_name() const
{
    return (this->name);
}

bool Aform::get_is_signed() const
{
    return (this->is_signed);
}

int Aform::get_exec_grade() const
{
    return (this->exec_grade);
}

int Aform::get_sign_grade() const
{
    return (this->sign_grade);
}

std::ostream &operator<<(std::ostream &out, Aform& Aform)
{
    out << "Aform name: " << Aform.get_name() << std::endl;
    out << "Aform sign grade: " << Aform.get_sign_grade() << std::endl;
    out << "Aform exec grade: " << Aform.get_exec_grade() << std::endl;
    out << "Aform is signed: " << Aform.get_is_signed() << std::endl;
    return (out);
}

void Aform::execute(Bureaucrat &Bureaucrat) const
{
    std::cout << "Aform execute called for " << Bureaucrat.getName() << std::endl;
}