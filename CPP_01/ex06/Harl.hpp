/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:55:44 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/16 12:10:47 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <map>
#include <vector>
#include <string>

#define DEFAULT 0
#define DEBUG 1
#define INFO 2
#define WARNING 3
#define ERROR 4

class Harl
{
    private:
        void default_level(void);
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void complain_loop(int level);
    public:
        void complain(std::string level);
        void filter(std::string level);
        Harl();
        ~Harl();
};

#endif