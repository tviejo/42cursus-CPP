/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 12:21:55 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/14 12:16:20 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Contact.hpp"
#include <stdint.h>
# include <string>
# include <limits>

class PhoneBook{
    private:
        int nb_contacts;
        Contact contacts[8];
    public:
        PhoneBook();
        void add_contact();
        void search_contact();
};