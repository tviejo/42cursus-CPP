/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:21:55 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/12 12:23:07 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"

class Phone_book{
    public:
        Contact contacts[8];
        int nb_contacts;
        Phone_book();
        void add_contact();
        void search_contact();
};