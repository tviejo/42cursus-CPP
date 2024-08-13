/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:19:32 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/13 22:28:56 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}

Zombie::~Zombie()
{
    std::cout << this->name << ": destructor called" << std::endl;
}

Zombie::Zombie(void)
{
    this->name = "default";
    std::cout << this->name << ": constructor called" << std::endl;
}
void Zombie::give_name(std::string name)
{
    this->name = name;
}
