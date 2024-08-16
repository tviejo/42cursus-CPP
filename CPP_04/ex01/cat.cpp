/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:51:04 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 22:08:49 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "cat.hpp"

Cat::Cat() : Animal::Animal("Cat")
{
    brain = new Brain("cat is thinking");
}

void Cat::makeSound() const
{
    std::cout << brain->getIdea(0) << std::endl;
    std::cout << "cats don’t bark" << std::endl;
}

Cat & Cat::operator=(const Cat &value)
{
    this->type = value.type;
    this->brain = new Brain(*value.brain);
    return (*this);
}

Cat::~Cat()
{
    delete brain;
}