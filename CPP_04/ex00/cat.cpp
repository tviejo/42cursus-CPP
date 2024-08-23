/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:51:04 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/23 13:11:46 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "cat.hpp"

Cat::Cat() : Animal::Animal("Cat")
{
	std::cout << "Cat constructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "cats don’t bark" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal::Animal(copy)
{
	std::cout << "Cat copy constructor called" << std::endl;
    type = copy.getType();
}
Cat & Cat::operator=(const Cat &value)
{
	std::cout << "Cat assignation operator called" << std::endl;
    if (this != &value)
	{
		this->type = value.type;
	}
	return *this;
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

