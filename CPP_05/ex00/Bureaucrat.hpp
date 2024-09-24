/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 10:39:04 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/24 12:33:44 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat
{
    private:
        std::string const name;
        int grade;
    protected:
    public:
        ~Bureaucrat();
        Bureaucrat();
        Bureaucrat(int grade);
        Bureaucrat(std::string name, int grade);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &copy);
        std::string getName() const;
        int getGrade();
        void    increment();
        void    decrement();
        class GradeTooHighException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Grade is too high");
                }
        };
        class GradeTooLowException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Grade is too low");
                }
        };
};

std::ostream &operator<<(std::ostream &out, Bureaucrat& Bureaucrat);

#endif