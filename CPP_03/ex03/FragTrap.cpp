/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:09:15 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/19 15:40:03 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(std::string _name)
{
    ClapTrap::set_name(_name);
    this->hitpoints = 100;
    this->energypoints = 100;
    this->attackdamage = 30;
    std::cout << "FragTrap " << ClapTrap::get_name() << " is ready to fight!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << ClapTrap::get_name() << " want at high five" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
    std::cout << "FragTrap " << ClapTrap::get_name() << " is ready to fight!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
    if (this != &copy)
    {
        set_name(copy.get_name());
        this->hitpoints = copy.hitpoints;
        this->energypoints = copy.energypoints;
        this->attackdamage = copy.attackdamage;
    }
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << ClapTrap::get_name() << " is dead" << std::endl;
}

FragTrap::FragTrap()
{
    ClapTrap::set_name("default");
    this->hitpoints = 100;
    this->energypoints = 100;
    this->attackdamage = 30;
    std::cout << "FragTrap " << ClapTrap::get_name() << " is ready to fight!" << std::endl;
}

void FragTrap::attack(const std::string &target)
{
    std::cout << "FragTrap " << ClapTrap::get_name() << " attack " << target << ", causing " << this->attackdamage << " points of damage!" << std::endl;
}
