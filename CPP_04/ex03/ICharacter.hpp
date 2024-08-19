/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 13:07:41 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/19 14:08:54 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_H
# define ICHARACTER_H

# include <string>
# include <iostream>
# include "AMateria.hpp"

class ICharacter
{
    protected:
    private:
        AMateria *inventory[4];
    public:
        ~ICharacter();
        ICharacter();
        ICharacter(const ICharacter &copy);
        ICharacter &operator=(const ICharacter &copy);
        virtual ~ICharacter() {};
        virtual std::string const & getName() const = 0;
        virtual void equip(AMateria* m) = 0;
        virtual void unequip(int idx) = 0;
        virtual void use(int idx, ICharacter& target) = 0;
};

#endif