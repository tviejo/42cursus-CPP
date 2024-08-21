/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:08:36 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/21 11:05:15 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include <string>
# include <iostream>
# include "AMateria.hpp"

class Cure : public AMateria
{
    protected:
        std::string type;
    public:
        Cure();
        ~Cure();
        Cure(const Cure &copy);
        Cure &operator=(const Cure &copy);
        Cure(std::string const & type);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif