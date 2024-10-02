/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:45:45 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/02 19:31:30 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <string>
# include <exception>
# include <stack>
# include <cmath>
# include <sstream>
# include <iomanip>

# define SHOWDEBUG 0

class RPN
{
    public:
        RPN(void);
        ~RPN(void);
        RPN(const RPN &src);
        RPN &operator=(const RPN &src);
        float   calculate(std::string input);
    private:
        std::stack<double> _stack;
        float   _result;
        void    add();
        void    sub();
        void    mul();
        void    div();
};


#endif