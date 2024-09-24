/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Aform.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:44:04 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/24 12:50:48 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Aform_H
# define Aform_H

# include <string>
# include <iostream>
# include <exception>
#include <cstdlib>
#include <ctime>

class Bureaucrat;

class Aform
{
    private:
        std::string const   name;
        bool                is_signed;
        int const           sign_grade;
        int const           exec_grade;
    protected:
    public:
        virtual ~Aform();
        Aform();
        Aform(int sign_grade, int exec_grade, bool is_signed);
        Aform(std::string name, int sign_grade, int exec_grade, bool is_signed);
        Aform(const Aform &copy);
        Aform &operator=(const Aform &copy);
        std::string get_name() const;
        bool        get_is_signed() const;
        int         get_sign_grade() const;
        int         get_exec_grade() const;
        void        beSigned(const Bureaucrat &bureaucrat);
        virtual void    execute(Bureaucrat &Bureaucrat) const = 0;
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

        class FormNotSignedException : public std::exception
        {
            public:
                virtual const char* what() const throw()
                {
                    return ("Form not signed");
                }
        };
};

std::ostream &operator<<(std::ostream &out, Aform& Aform);

#endif