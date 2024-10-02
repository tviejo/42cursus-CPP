/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:45:50 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/02 17:23:44 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "usage: ./bitcoinExchange [data]" << std::endl;
        return (1);
    }
    BitcoinExchange exchange;
    exchange.printValues(argv[1]);
    return (0);
}