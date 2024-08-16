/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 16:35:40 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 17:06:35 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 50, 20)
{
    std::cout << "ScavTrap " << ClapTrap::get_name() << " is ready to fight!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << ClapTrap::get_name() << " is now in Gate keeper mode" << std::endl;
}