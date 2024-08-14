/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:01:13 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/14 18:16:49 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Weapon.hpp"

Weapon::Weapon()
{
}

Weapon::Weapon(std::string type)
{
	this->type = type;
}
Weapon::~Weapon()
{
}

std::string Weapon::getType(void)
{
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}

