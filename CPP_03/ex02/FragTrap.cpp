/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 17:09:15 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 17:26:35 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 30)
{
    std::cout << "FragTrap " << ClapTrap::get_name() << " is ready to fight!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << ClapTrap::get_name() << " want at high five" << std::endl;
}