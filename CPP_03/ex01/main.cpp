/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:35:33 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 16:47:46 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"

int main(void)
{
    ClapTrap soldier( "soldier", 10, 5, 1);  //name, hitpoint, energypoint, attackdamage
    ClapTrap soldier2( "soldier2", 10, 2, 5);  //name, hitpoint, energypoint, attackdamage
    soldier.attack("enemy");
    soldier.takeDamage(5);
    soldier.beRepaired(5);
    soldier.takeDamage(10);
    soldier.beRepaired(5);

    soldier2.attack("enemy");
    soldier2.attack("enemy");
    soldier2.attack("enemy");

    ScavTrap scav_soldier("ScavTrap");
    scav_soldier.attack("enemy");
    scav_soldier.guardGate();
}