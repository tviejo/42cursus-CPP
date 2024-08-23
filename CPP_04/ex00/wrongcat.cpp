/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongcat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:51:04 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/23 13:13:15 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "wrongcat.hpp"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal("WrongCat")
{
    std::cout << "WrongCat constructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "cats don’t bark" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &value)
{
    std::cout << "WrongCat assignation operator called" << std::endl;
    (void)value;
    return (*this);
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal::WrongAnimal(copy)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    type = copy.getType();
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}