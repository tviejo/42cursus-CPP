/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:19:28 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/16 10:47:49 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Zombie.hpp"

Zombie*     zombieHorde(int N, std::string name);

int main(void)
{
    int N;
    std::cout << "which horde size do you want?" << std::endl;
    std::cin >> N;
    if (N < 0 || std::cin.eof())
    {
        std::cout << "Invalid input" << std::endl;
        return (0);
    }
    Zombie *zombie = zombieHorde(N, "zombie");
    for (int i = 0; i < N; i++)
        zombie[i].announce();
    delete [] zombie;
    return (0);
}