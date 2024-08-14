/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 12:57:16 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/14 12:14:27 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "phonebook.hpp"
# include <iostream>

int main(void)
{
    PhoneBook phonebook;
    std::string command;

    while (!std::cin.eof())
    {
        std::cout << "Enter a command: ";
        std::cin >> command;
        if (command == "ADD")
            phonebook.add_contact();
        else if (command == "SEARCH")
            phonebook.search_contact();
        else if (command == "EXIT")
            break;
        else
            std::cout << "Invalid command" << std::endl;
    }
}