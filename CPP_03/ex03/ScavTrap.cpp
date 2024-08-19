/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:35:40 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/19 16:25:32 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    set_name(name);
    this->hitpoints = 100;
    this->energypoints = 50;
    this->attackdamage = 20;
    std::cout << "ScavTrap " << ClapTrap::get_name() << " is ready to fight!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << ClapTrap::get_name() << " is now in Gate keeper mode" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap " << ClapTrap::get_name() << " is ready to fight!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
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

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << ClapTrap::get_name() << " is dead" << std::endl;
}

ScavTrap::ScavTrap()
{
    set_name("default");
    this->hitpoints = 100;
    this->energypoints = 50;
    this->attackdamage = 20;
    std::cout << "ScavTrap " << ClapTrap::get_name() << " is ready to fight!" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
     if (this->energypoints <= 0 || this->energypoints <= 0)
    {
        if (this->energypoints <= 0)
            std::cout << "Attack impossible, no energy points left" << std::endl;
        else
            std::cout << "Attack impossible, no hit points left" << std::endl;
        return ;
    }
    this->energypoints--;
    std::cout << "ScavTrap " << get_name() << " attack " << target;
    std::cout << ", causing " << this->attackdamage << " points of damage!" << std::endl;
}