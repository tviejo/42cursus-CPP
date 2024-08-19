/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 14:08:57 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/19 14:10:51 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ICharacter.hpp"

ICharacter::~ICharacter()
{
}

ICharacter::ICharacter()
{
    for (int i = 0; i < 4; i++)
        inventory[i] = NULL;
}

ICharacter::ICharacter(const ICharacter &copy)
{
    for (int i = 0; i < 4; i++)
    {
        if (copy.inventory[i])
            inventory[i] = copy.inventory[i]->clone();
        else
            inventory[i] = NULL;
    }
}

ICharacter &ICharacter::operator=(const ICharacter  &value)
{
    (void)value;
    return (*this);
}

void ICharacter::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!inventory[i])
        {
            inventory[i] = m;
            return ;
        }
    }
}

void ICharacter::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        inventory[idx] = NULL;
}

void ICharacter::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && inventory[idx])
        inventory[idx]->use(target);
}