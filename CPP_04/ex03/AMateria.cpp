/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/19 12:53:33 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/19 14:11:08 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "AMateria.hpp"

AMateria::AMateria()
{
    std::cout << "Default AMateria constructor called" << std::endl;
}

AMateria::~AMateria()
{
    std::cout << "Default AMateria desstructor called" << std::endl;
}

AMateria &AMateria::operator=(const AMateria &copy)
{
    std::cout << "Copy assignment operator AMateria called" << std::endl;
    return (*this);
}

AMateria::AMateria(const AMateria &copy)
{
    std::cout << "Copy constructor AMateria called" << std::endl;
    *this = copy;
}

AMateria::AMateria(std::string const & type)
{
    std::cout << "Parametric AMateria constructor called" << std::endl;
    this->type = type;
}

std::string const & AMateria::getType() const
{
    return (this->type);
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}

AMateria* AMateria::clone() const
{
    return (new AMateria(*this));
}
