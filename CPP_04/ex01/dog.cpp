/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:55:10 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/23 13:14:35 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "dog.hpp"

Dog::Dog() : Animal::Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
	brain = new Brain("Dog is thinking");
}

void Dog::makeSound() const
{
	std::cout << brain->getIdea(0) << std::endl;
    std::cout << "Woof" << std::endl;
}

Dog & Dog::operator=(const Dog &value)
{
	std::cout << "Dog assignation operator called" << std::endl;	
    if (this != &value)
	{
		this->type = value.type;
		this->brain = new Brain(*value.brain);
	}
	return *this;
}

Dog::Dog(const Dog &copy) : Animal::Animal(copy)
{
	std::cout << "Dog copy constructor called" << std::endl;
    type = copy.getType();
	this->brain = new Brain(*copy.brain);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete brain;
}