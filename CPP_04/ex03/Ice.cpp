/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:10:31 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/21 12:43:50 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

Ice::Ice() : AMateria("Ice")
{
    std::cout << "Default Ice constructor called" << std::endl;
}

Ice::~Ice()
{
    std::cout << "Default Ice destructor called" << std::endl;
}

Ice &Ice::operator=(const Ice &copy)
{
    std::cout << "Copy assignment operator Ice called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

Ice::Ice(const Ice &copy) : AMateria(copy)
{
    std::cout << "Copy constructor Ice called" << std::endl;
    *this = copy;
}

AMateria* Ice::clone() const
{
    return (new Ice(*this));
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an Ice bolt at " << target.getName() << " *" << std::endl;
}