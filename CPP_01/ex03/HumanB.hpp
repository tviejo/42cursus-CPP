/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 14:00:57 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/16 10:52:48 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        Weapon* weapon;
    public:
        HumanB(std::string name);
        ~HumanB();
        void attack(void);
        void setWeapon(Weapon *weapon);
};

#endif