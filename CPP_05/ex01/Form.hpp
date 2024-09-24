/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 11:44:04 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/24 17:53:36 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_H
# define FORM_H

# include <string>
# include <iostream>
# include <exception>

class Bureaucrat;

class Form
{
    private:
        std::string const   name;
        bool                is_signed;
        int const           sign_grade;
        int const           exec_grade;
    protected:
    public:
        ~Form();
        Form();
        Form(int sign_grade, int exec_grade);
        Form(std::string name, int sign_grade, int exec_grade);
        Form(const Form &copy);
        Form &operator=(const Form &copy);
        std::string get_name() const;
        bool        get_is_signed() const;
        int         get_sign_grade() const;
        int         get_exec_grade() const;
        void    beSigned(Bureaucrat &bureaucrat);
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

std::ostream &operator<<(std::ostream &out, Form& Form);

#endif