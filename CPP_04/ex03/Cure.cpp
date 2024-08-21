/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:09:59 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/21 12:50:33 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

Cure::Cure() : AMateria("Cure")
{
    std::cout << "Default Cure constructor called" << std::endl;
}

Cure::~Cure()
{
    std::cout << "Default Cure destructor called" << std::endl;
}

Cure &Cure::operator=(const Cure &copy)
{
    std::cout << "Copy assignment operator Cure called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

Cure::Cure(const Cure &copy) : AMateria(copy)
{
    std::cout << "Copy constructor Cure called" << std::endl;
    *this = copy;
}

AMateria* Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}