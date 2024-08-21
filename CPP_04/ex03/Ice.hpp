/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:09:24 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/21 11:05:01 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include <string>
# include <iostream>
# include "AMateria.hpp"

class Ice : public AMateria
{
    protected:
        std::string type;
    public:
        Ice();
        ~Ice();
        Ice(const Ice &copy);
        Ice &operator=(const Ice &copy);
        Ice(std::string const & type);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif