/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 19:20:09 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/16 12:16:40 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;

    if (ac != 2)
        return (std::cout << "bad argument" << std::endl, 0);
    harl.filter(av[1]);

    std::cout << std::endl << "test complain" << std::endl;
    harl.complain(av[1]);
    return (0);
}