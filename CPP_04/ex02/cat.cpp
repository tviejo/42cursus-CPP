/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:51:04 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/23 13:15:06 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "cat.hpp"

Cat::Cat() : Animal::Animal("Cat")
{
	brain = new Brain("Cat is thinking");
}

void Cat::makeSound() const
{
	std::cout << brain->getIdea(0) << std::endl;
    std::cout << "cats don’t bark" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal::Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
    type = copy.getType();
	this->brain = new Brain(*copy.brain);
}
Cat & Cat::operator=(const Cat &value)
{
	std::cout << "Cat assignation operator called" << std::endl;
    if (this != &value)
	{
		this->type = value.type;
		this->brain = new Brain(*value.brain);
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
	delete brain;
}

