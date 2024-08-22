/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:55:10 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 22:18:35 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "dog.hpp"

Dog::Dog() : Animal::Animal("Dog")
{
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}

Dog & Dog::operator=(const Dog &value)
{
    if (this != &value)
	{
		this->type = value.type;
	}
	return *this;
}

Dog::Dog(const Dog &copy) : Animal::Animal(copy)
{
    type = copy.getType();
}

Dog::~Dog()
{
}