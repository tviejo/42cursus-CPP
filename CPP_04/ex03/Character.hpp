/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 10:39:51 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/22 11:28:46 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_H
# define CHARACTER_H

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "GarbageCollector.hpp"
#include <iostream>

class Character : public ICharacter, public GarbageCollector
{
    private:
        std::string name;
        AMateria *inventory[4];
    public:
        ~Character();
        Character();
        Character(const Character &copy);
        Character &operator=(const Character &copy);
        Character(std::string name);    
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};

#endif
