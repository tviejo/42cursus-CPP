/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:59:53 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/19 15:53:37 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    name = "default";
    hitpoints = 10;
    energypoints = 10;
    attackdamage = 0;
    std::cout << "Claptrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string _name)
{
    name = _name;
    hitpoints = 10;
    energypoints = 10;
    attackdamage = 0;
    std::cout << "Constructor called for: " << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
    name = copy.get_name();
    attackdamage = copy.get_attackdamage();
    hitpoints = copy.get_hitpoints();
    energypoints = copy.get_energypoints();
    std::cout << "Constructor called for: " << name << std::endl;
}

ClapTrap::ClapTrap(const std::string _name, int _hitpoints, int _energyPoints, int _attackDamage)
{
    this->name = _name;
    this->hitpoints = _hitpoints;
    this->energypoints = _energyPoints;
    this->attackdamage = _attackDamage;
    std::cout << "Constructor called for: " << name << std::endl;
}
std::string ClapTrap::get_name() const
{
    return (this->name);
}

int ClapTrap::get_attackdamage() const
{
    return(this->attackdamage);
}

int ClapTrap::get_hitpoints() const
{
    return (this->hitpoints);
}

int ClapTrap::get_energypoints() const
{
    return (this->energypoints);
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    if (this != &copy)
    {
        name = copy.get_name();
        attackdamage = copy.get_attackdamage();
        hitpoints = copy.get_hitpoints();
        energypoints = copy.get_energypoints();
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap Destructor called for: " << name << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    this->hitpoints -= amount;
    std::cout << "Claptrap " << this->name << " take damage";
        std::cout << ", it now have " << this->hitpoints << " hitpoints" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energypoints > 0 && this->hitpoints > 0)
    {
        this->hitpoints += amount;
        this->energypoints --;
        std::cout << "Claptrap " << this->name << " repaired";
        std::cout << ", it now have " << this->hitpoints << " hitpoints" << std::endl;
    }
    else
    {
        if (this->energypoints <= 0)
            std::cout << "Attack impossible, no energy points left" << std::endl;
        else
            std::cout << "Attack impossible, no hit points left" << std::endl;
    }
}

void ClapTrap::attack(const std::string& target)
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
    std::cout << "Claptrap " << this->name << " attack " << target;
    std::cout << ", causing " << this->attackdamage << " points of damage!" << std::endl;
    
}

void ClapTrap::set_name(std::string _name)
{
    name = _name;
}