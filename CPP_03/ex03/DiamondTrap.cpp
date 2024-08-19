/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/17 21:08:18 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/19 16:25:57 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("default_clap_name"), ScavTrap("default_clap_name"), FragTrap("default_clap_name")
{
    this->name = "default";
    this->hitpoints = FragTrap::get_hitpoints();
    this->energypoints = ScavTrap::get_energypoints();
    this->attackdamage = FragTrap::get_attackdamage();
    std::cout << "DiamondTrap " << ClapTrap::get_name() << " is ready to fight!" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name + "_clap_name"), FragTrap(name + "_clap_name")
{
    this->name = name;
    this->hitpoints = FragTrap::get_hitpoints();
    this->energypoints = ScavTrap::get_energypoints();
    this->attackdamage = FragTrap::get_attackdamage();
    std::cout << "DiamondTrap " << ClapTrap::get_name() << " is ready to fight!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy)
{
    std::cout << "DiamondTrap " << ClapTrap::get_name() << " is ready to fight!" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &copy)
{
    if (this != &copy)
    {
        this->name = copy.name;
        this->hitpoints = copy.hitpoints;
        this->energypoints = copy.energypoints;
        this->attackdamage = copy.attackdamage;
    }
    return (*this);
}

void DiamondTrap::whoAmI()
{
    std::cout << "I am " << ClapTrap::get_name() << " and my name is " << this->name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << ClapTrap::get_name() << " is dead" << std::endl;
}

void DiamondTrap::attack(const std::string &target)
{
    ScavTrap::attack(target);
}