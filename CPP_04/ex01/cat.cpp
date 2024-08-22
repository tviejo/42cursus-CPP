/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:51:04 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/22 10:24:55 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "cat.hpp"

Cat::Cat() : Animal::Animal("Cat")
{
}

void Cat::makeSound() const
{
    std::cout << "cats don’t bark" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal::Animal(copy)
{
    type = copy.getType();
}
Cat & Cat::operator=(const Cat &value)
{
    if (this != &value)
	{
		this->type = value.type;
	}
	return *this;
}

Cat::~Cat()
{
}

