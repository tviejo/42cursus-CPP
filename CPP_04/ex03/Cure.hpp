/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:08:36 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/20 22:12:58 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_H
# define CURE_H

# include <string>
# include <iostream>
# include "AMateria.hpp"

class cure : public AMateria
{
    protected:
        std::string type;
    public:
        cure();
        ~cure();
        cure(const cure &copy);
        cure &operator=(const cure &copy);
        cure(std::string const & type);
        AMateria* clone() const;
        void use(ICharacter& target);
};

#endif