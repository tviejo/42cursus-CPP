/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 18:57:54 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/16 12:18:21 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

Harl::Harl()
{
}

Harl::~Harl()
{
}

void Harl::default_level(void)
{
    std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
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
    complaints["DEFAULT"] = &Harl::default_level;
    complaints["DEBUG"] = &Harl::debug;
    complaints["INFO"] = &Harl::info;
    complaints["WARNING"] = &Harl::warning;
    complaints["ERROR"] = &Harl::error;

    if (complaints.find(level) == complaints.end())
        (this->*complaints["DEFAULT"])();
    else
        (this->*complaints[level])();
}

void    Harl::complain_loop(int level)
{
    std::vector<std::string> levels;
    levels.push_back("DEFAULT");
    levels.push_back("DEBUG");
    levels.push_back("INFO");
    levels.push_back("WARNING");
    levels.push_back("ERROR");
    
    for (int i = level; i < 5; i++)
    {
        std::cout << "[ " << levels[i] << " ]" << std::endl;
        complain(levels[i]);
        std::cout << std::endl;
    }
}

void    Harl::filter(std::string level)
{
    std::map<std::string, int> index;
    index["DEFAULT"] = 0;
    index["DEBUG"] = 1;
    index["INFO"] = 2;
    index["WARNING"] = 3;
    index["ERROR"] = 4;

    switch (index[level])
    {
        case DEBUG:
            complain_loop(DEBUG);
            break;
        case INFO:
            complain_loop(INFO);
            break;
        case WARNING:
            complain_loop(WARNING);
            break;
        case ERROR:
            complain_loop(ERROR);
            break;
        default:
            default_level();
            break;
    }
}