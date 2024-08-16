/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongcat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:51:04 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 21:02:04 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "wrongcat.hpp"

WrongCat::WrongCat() : WrongAnimal::WrongAnimal("WrongCat")
{
}

void WrongCat::makeSound() const
{
    std::cout << "cats don’t bark" << std::endl;
}

WrongCat & WrongCat::operator=(const WrongCat &value)
{
    (void)value;
    return (*this);
}

WrongCat::~WrongCat()
{
}