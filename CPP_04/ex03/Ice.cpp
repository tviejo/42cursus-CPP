/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/20 22:10:31 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/20 22:11:14 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Ice.hpp"

ice::ice() : AMateria("ice")
{
    std::cout << "Default ice constructor called" << std::endl;
}

ice::~ice()
{
    std::cout << "Default ice desstructor called" << std::endl;
}

ice &ice::operator=(const ice &copy)
{
    std::cout << "Copy assignment operator ice called" << std::endl;
    if (this != &copy)
        this->type = copy.type;
    return (*this);
}

ice::ice(const ice &copy) : AMateria(copy)
{
    std::cout << "Copy constructor ice called" << std::endl;
    *this = copy;
}

AMateria* ice::clone() const
{
    return (new ice(*this));
}

void ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}