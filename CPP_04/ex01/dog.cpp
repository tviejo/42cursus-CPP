/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:55:10 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/23 09:57:48 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "dog.hpp"

Dog::Dog() : Animal::Animal("Dog")
{
	brain = new Brain("Dog is thinking");
}

void Dog::makeSound() const
{
	std::cout << brain->getIdea(0) << std::endl;
    std::cout << "Woof" << std::endl;
}

Dog & Dog::operator=(const Dog &value)
{
    if (this != &value)
	{
		this->type = value.type;
		this->brain = new Brain(*value.brain);
	}
	return *this;
}

Dog::Dog(const Dog &copy) : Animal::Animal(copy)
{
    type = copy.getType();
	this->brain = new Brain(*copy.brain);
}

Dog::~Dog()
{
	delete brain;
}