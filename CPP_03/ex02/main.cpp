/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:35:33 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/19 15:46:07 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"

int main(void)
{
    ClapTrap soldier( "soldier", 10, 5, 1);  //name, hitpoint, energypoint, attackdamage
    ClapTrap soldier2( "soldier2", 10, 2, 5);  //name, hitpoint, energypoint, attackdamage
    std::cout << std::endl ;
    soldier.attack("enemy");
    soldier.takeDamage(5);
    soldier.beRepaired(5);
    soldier.takeDamage(10);
    soldier.beRepaired(5);

    soldier2.attack("enemy");
    soldier2.attack("enemy");
    soldier2.attack("enemy");

    std::cout << std::endl << std::endl;
    ScavTrap scav_soldier("ScavTrap");
    std::cout << std::endl;
    scav_soldier.attack("enemy");
    scav_soldier.guardGate();

    std::cout << std::endl<< std::endl;
    FragTrap frag_soldier("FragTrap");
    std::cout << std::endl;
    frag_soldier.attack("enemy");
    frag_soldier.highFivesGuys();
}