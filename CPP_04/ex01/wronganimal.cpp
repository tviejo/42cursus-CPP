/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wronganimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:42:59 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 21:11:35 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "wronganimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "Default Wrong Animal constructor called" << std::endl;
    type = "Wrong_animal";
}

WrongAnimal::WrongAnimal(std::string _type)
{
    std::cout << "Default Wrong Animal constructor called" << std::endl;
    type = _type;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "Destructor Wrong Animal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy)
{
    std::cout << "Copy constructor Wrong Animal called" << std::endl;
    *this = copy;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &copy)
{
    std::cout << "Copy assignment operator Wrong Animal called" << std::endl;
    type = copy.getType();
    return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "Animal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (type);
}


