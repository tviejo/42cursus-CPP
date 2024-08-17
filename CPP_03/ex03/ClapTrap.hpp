/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 13:57:50 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/17 21:35:36 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cmath>

class ClapTrap
{
    private:
        std::string name;
    protected:
        int hitpoints;
        int energypoints;
        int attackdamage;
    public:
        ClapTrap();
        ClapTrap(const std::string name);
        ClapTrap(const std::string name, int hitpoints, int energyPoints, int attackDamage);
        ClapTrap(const ClapTrap &copy);
        ClapTrap &operator=(const ClapTrap &copy);
        ~ClapTrap();
        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        std::string get_name() const;
        int get_hitpoints() const;
        int get_energypoints() const;
        int get_attackdamage() const;
        void set_name(std::string name);
};

#endif