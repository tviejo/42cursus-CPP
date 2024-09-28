/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:32:07 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/28 17:57:26 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

Serializer::Serializer()
{
    std::cout << "Serializer constructor called" << std::endl;
}

Serializer::~Serializer()
{
    std::cout << "Serializer destructor called" << std::endl;
}

Serializer &Serializer::operator=(const Serializer &copy)
{
    std::cout << "Copy assignment operator Serializer called" << std::endl;
    if (this != &copy)
    {
    }
    return (*this);
}

Serializer::Serializer(const Serializer &copy)
{
    std::cout << "Copy constructor Serializer called" << std::endl;
    *this = copy;
}

uintptr_t Serializer::serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data*>(raw));
}