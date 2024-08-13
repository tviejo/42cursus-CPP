/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:05:52 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/13 22:17:02 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie* newZombie(std::string name);

int main(void)
{
    Zombie zombie1("Zombie_1");
    zombie1.announce();
    Zombie *zombie2 = newZombie("Zombie_2");
    zombie2->announce();
    randomChump("Zombie_3");
    delete zombie2;
}