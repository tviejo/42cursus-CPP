/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 14:35:33 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/17 21:37:38 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ClapTrap.hpp"
# include "ScavTrap.hpp"
# include "FragTrap.hpp"
# include "DiamondTrap.hpp"

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

    std::cout << std::endl ;

    soldier2.attack("enemy");
    soldier2.attack("enemy");
    soldier2.attack("enemy");

    std::cout << std::endl << std::endl;

    ScavTrap scav_soldier("ScavTrap");
    std::cout << std::endl;
    scav_soldier.attack("enemy");
    scav_soldier.guardGate();

    std::cout << std::endl << std::endl;

    FragTrap frag_soldier("FragTrap");
    std::cout << std::endl;
    frag_soldier.attack("enemy");
    frag_soldier.highFivesGuys();

    std::cout << std::endl << std::endl;

    DiamondTrap diamond_soldier("DiamondTrap");
    std::cout << std::endl;
    diamond_soldier.attack("enemy");
    diamond_soldier.highFivesGuys();
    diamond_soldier.whoAmI();

    std::cout << std::endl << std::endl;
    return (0);
}