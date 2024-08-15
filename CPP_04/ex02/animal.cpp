/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:42:59 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 20:53:44 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "animal.hpp"

Animal::Animal()
{
    std::cout << "Default Animal constructor called" << std::endl;
    type = "animal";
}

Animal::Animal(std::string _type)
{
    std::cout << "Default Animal constructor called" << std::endl;
    type = _type;
}

Animal::~Animal()
{
    std::cout << "Destructor Animal called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
    std::cout << "Copy constructor Animal called" << std::endl;
    *this = copy;
}

Animal &Animal::operator=(const Animal &copy)
{
    std::cout << "Copy assignment operator Animal called" << std::endl;
    type = copy.getType();
    return (*this);
}

void Animal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return (type);
}


