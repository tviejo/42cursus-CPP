/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:21:55 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/13 18:57:26 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

class PhoneBook{
    private:
        int nb_contacts;
        Contact contacts[8];
    public:
        PhoneBook();
        void add_contact();
        void search_contact();
};