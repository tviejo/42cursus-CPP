/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 11:59:09 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/14 12:55:21 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Contact.hpp"

Contact::Contact()
{

}

std::string Contact::get_first_name()
{
    return this->first_name;
}

std::string Contact::get_last_name()
{
    return this->last_name;
}

std::string Contact::get_nickname()
{
    return this->nickname;
}

std::string Contact::get_phone_number()
{
    return this->phone_number;
}

std::string Contact::get_darkest_secret()
{
    return this->darkest_secret;
}

static bool is_valid_phone_number(std::string phone_number)
{
    if (phone_number.length() != 10)
        return false;
    for (int i = 0; i < 10; i++)
    {
        if (phone_number[i] < '0' || phone_number[i] > '9')
            return false;
    }
    return true;
}

void    Contact::create_contact()
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;

    std::cout << "First name: ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> first_name;
    if (std::cin.eof())
        return;
    std::cout << "Last name: ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> last_name;
    if (std::cin.eof())
        return;
    std::cout << "Nickname: ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> nickname;
    if (std::cin.eof())
        return;
    std::cout << "Phone number: ";
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cin >> phone_number;
    while (is_valid_phone_number(phone_number) == false)
    {
        std::cout << "Invalid phone number. Please enter a 10 digit phone number: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> phone_number;
        if (std::cin.eof())
            return;
    }
    if (std::cin.eof())
        return;
    std::cout << "Darkest secret: ";
    std::getline(std::cin >> std::ws, darkest_secret);
    if (std::cin.eof())
        return;
    
    this->first_name = first_name;
    this->last_name = last_name;
    this->nickname = nickname;
    this->phone_number = phone_number;
    this->darkest_secret = darkest_secret;
}

void   Contact::display_contact()
{
    std::cout << "First name:    " << this->first_name << std::endl;
    std::cout << "Last name:     " << this->last_name << std::endl;
    std::cout << "Nickname:      " << this->nickname << std::endl;
    std::cout << "Phone number:  " << this->phone_number << std::endl;
    std::cout << "darkest secret:" << this->darkest_secret << std::endl;
}

void    Contact::display_contact_header()
{
    if (first_name.length() > 10)
        std::cout << first_name.substr(0, 9) << "." << "|";
    else
        std::cout << std::setw(10) << std::setfill(' ') << first_name << "|";
    if (last_name.length() > 10)
        std::cout << last_name.substr(0, 9) << "." << "|";
    else
        std::cout << std::setw(10) << std::setfill(' ') << last_name << "|";
    if (nickname.length() > 10)
        std::cout << nickname.substr(0, 9) << "." << "|";
    else
        std::cout << std::setw(10) << std::setfill(' ') << nickname << "|";
}