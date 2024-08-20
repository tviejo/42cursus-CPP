/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:09:24 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/20 22:13:03 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_H
# define ICE_H

# include <string>
# include <iostream>
# include "AMateria.hpp"

class ice : public AMateria
{
    protected:
        std::string type;
    public:
        ice();
        ~ice();
        ice(const ice &copy);
        ice &operator=(const ice &copy);
        ice(std::string const & type);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif