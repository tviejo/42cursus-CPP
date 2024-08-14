/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:06:32 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/14 12:17:58 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook()
{
    this->nb_contacts = 0;
}

void PhoneBook::add_contact()
{
    if (this->nb_contacts == 8)
    {
        for (int i = 0; i < 7; i++)
            this->contacts[i] = this->contacts[i + 1];
        this->nb_contacts--;
    }
    if (std::cin.eof())
        return;
    this->contacts[this->nb_contacts].create_contact();
    this->nb_contacts++;
}

void PhoneBook::search_contact()
{
    int index;
    
    for (int i = 0; i < this->nb_contacts; i++)
    {
        std::cout << "         " << i << "|";
        this->contacts[i].display_contact_header();
        std::cout << std::endl;
    }
    std::cout << "Enter the index of the contact you want to display: ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> index;
    if (std::cin.eof())
        return;
    while (index < 0 || index >= this->nb_contacts)
    {
        std::cout << "Invalid input. Please enter a number between 0 and " << this->nb_contacts - 1 << ": ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> index;
        if (std::cin.eof())
            return;
    }
    this->contacts[index].display_contact();
}

