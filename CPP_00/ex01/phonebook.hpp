/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:21:55 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/13 12:21:27 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

class PhoneBook{
    public:
        Contact contacts[8];
        int nb_contacts;
        PhoneBook();
        void add_contact();
        void search_contact();
};