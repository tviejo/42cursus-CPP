/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:38:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/24 12:44:18 by tviejo           ###   ########.fr       */
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
        throw Bureaucrat::GradeTooHighException();
    else if (grade < 0)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "Bureaucrat grade constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade)
{
    if (grade > 150)
        throw Bureaucrat::GradeTooHighException();
    else if (grade < 0)
        throw Bureaucrat::GradeTooLowException();
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

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
    std::cout << "Copy constructor Bureaucrat called" << std::endl;
    *this = copy;
}

void    Bureaucrat::decrement()
{
    if (grade < 1)
        throw Bureaucrat::GradeTooLowException();
    else
        grade--;
}

void    Bureaucrat::increment()
{
    if (grade > 149)
        throw Bureaucrat::GradeTooHighException();
    else
        grade++;
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int Bureaucrat::getGrade()
{
    return (this->grade);
}

std::ostream &operator<<(std::ostream &out, Bureaucrat& Bureaucrat)
{
    out << Bureaucrat.getName() << ", bureaucrat grade " << Bureaucrat.getGrade();
    return (out);
}

void    Bureaucrat::signForm(std::string formName, std::string reason, bool isSigned)
{
    if (isSigned)
        std::cout << this->name << " signed " << formName << std::endl;
    else
        std::cout << this->name << " couldn’t sign " << formName << " because "<< reason << std::endl;
}