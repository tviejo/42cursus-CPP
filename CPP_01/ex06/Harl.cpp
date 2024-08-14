/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:57:54 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/14 20:14:24 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"
#include <vector>
#include <string>

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::debug(void)
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger." << std::endl << "I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    std::map<std::string, void (Harl::*)(void)> complaints;
    complaints["DEBUG"] = &Harl::debug;
    complaints["INFO"] = &Harl::info;
    complaints["WARNING"] = &Harl::warning;
    complaints["ERROR"] = &Harl::error;

    std::map<std::string, int> index;
    index["DEBUG"] = 0;
    index["INFO"] = 1;
    index["WARNING"] = 2;
    index["ERROR"] = 3;

    std::map<int, std::string> complaints_index;
    complaints_index[0] = "DEBUG";
    complaints_index[1] = "INFO";
    complaints_index[2] = "WARNING";
    complaints_index[3] = "ERROR";

    if (complaints.find(level) != complaints.end())
    {
        int i = index[level];
        for (int j = i; j < 4; j++)
        {
            std::cout << "[ " << complaints_index[j] << " ]" << std::endl;
            (this->*complaints[complaints_index[j]])();
            std::cout << std::endl;
        }
    }
    else
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    
}