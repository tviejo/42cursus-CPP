/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:52:16 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/19 14:13:47 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
# define AMATERIA_H

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
    protected:
        AMateria();
        AMateria(const AMateria &copy);
        AMateria &operator=(const AMateria &copy);
        ~AMateria();
    private:
        std::string type;
    public:
        AMateria(std::string const & type);
        std::string const & getType() const;

        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};

#endif