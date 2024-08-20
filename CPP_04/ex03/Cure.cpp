/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:09:59 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/20 22:10:27 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Cure.hpp"

cure::cure() : AMateria("cure")
{
    std::cout << "Default cure constructor called" << std::endl;
}

cure::~cure()
{
    std::cout << "Default cure desstructor called" << std::endl;
}

cure &cure::operator=(const cure &copy)
{
    std::cout << "Copy assignment operator cure called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

cure::cure(const cure &copy) : AMateria(copy)
{
    std::cout << "Copy constructor cure called" << std::endl;
    *this = copy;
}

AMateria* cure::clone() const
{
    return (new cure(*this));
}

void cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}