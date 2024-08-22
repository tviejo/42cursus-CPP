/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:39:58 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/22 11:54:59 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Character.hpp"

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (this->inventory[i])
            delete this->inventory[i];
    }
    std::cout << "Default Character desstructor called" << std::endl;
}

Character::Character()
{
    std::cout << "Default Character constructor called" << std::endl;
}

Character::Character(const Character &copy)
{
    std::cout << "Copy constructor Character called" << std::endl;
    this->name = copy.name;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = copy.inventory[i];
}

Character &Character::operator=(const Character &copy)
{
    std::cout << "Copy assignment operator Character called" << std::endl;
    this->name = copy.name;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = copy.inventory[i];
    return (*this);
}

Character::Character(std::string name)
{
    std::cout << "Parametric Character constructor called" << std::endl;
    this->name = name;
    for (int i = 0; i < 4; i++)
        this->inventory[i] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (this->inventory[idx])
        this->inventory[idx]->use(target);
    else 
        std::cout << "No materia in this slot" << std::endl;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!this->inventory[i])
        {
            this->inventory[i] = m;
            return ;
        }
    }
}

void Character::unequip(int idx)
{
    if (this->inventory[idx])
    {
        GarbageCollector::collectGarbage(this->inventory[idx]);
        this->inventory[idx] = NULL;
    }
}
std::string const & Character::getName() const
{
    return (this->name);
}
