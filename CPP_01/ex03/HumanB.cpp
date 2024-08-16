/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:01:06 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/16 10:57:57 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "HumanB.hpp"

HumanB::HumanB(std::string name) : weapon(NULL)
{
    this->name = name;
}

HumanB::~HumanB()
{
}

void HumanB::attack(void)
{
    if (weapon != NULL)
        std::cout << this->name << " attacks with his " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " can't attack without a weapon " << std::endl;
}

void HumanB::setWeapon(Weapon *weapon)
{
    this->weapon = weapon;
}