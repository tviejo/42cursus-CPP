/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:19:37 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/16 10:45:02 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie*     zombieHorde(int N, std::string name)
{
    Zombie *zombie = new Zombie[N];
    for (int i = 0; i < N; i++)
        zombie[i].give_name(name);
    return (&zombie[0]);
}