/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:38:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/25 14:55:42 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("default"), grade(0)
{
    std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(int grade) : name("default"), grade(grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    std::cout << "Bureaucrat grade constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    std::cout << "Bureaucrat grade and name constructor called" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "Default Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy)
{
    std::cout << "Copy assignment operator Bureaucrat called" << std::endl;
    if (this != &copy)
    {
        this->grade = copy.grade;
    }
    return (*this);
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name), grade(copy.grade)
{
    std::cout << "Copy constructor Bureaucrat called" << std::endl;
    *this = copy;
}

void    Bureaucrat::decrement()
{
    if (grade > 149)
        throw Bureaucrat::GradeTooLowException();
    else
        grade++;
}

void    Bureaucrat::increment()
{
    if (grade < 2)
        throw Bureaucrat::GradeTooHighException();
    else
        grade--;
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade() const
{
    return (this->grade);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat& Bureaucrat)
{
    out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade();
    return (out);
}

void    Bureaucrat::signForm(Aform &form)
{
    try
    {
        form.beSigned(*this);
        std::cout << this->name << " signed " << form.get_name() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << this->name << " couldn't sign " << form.get_name() << " because " << e.what() << std::endl;
    }
}

void    Bureaucrat::executeForm(Aform const & form)
{
    try
    {
        form.execute(*this);
        std::cout << this->name << " executed " << form.get_name() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
}