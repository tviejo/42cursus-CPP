/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:24:52 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/19 11:07:10 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    value = 0;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = value << bits;
}

Fixed::Fixed(const float value)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = roundf(value * (1 << bits));
}

Fixed::Fixed(const Fixed &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    std::cout << "Copy assignment operator called" << std::endl;
    value = copy.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    return (value);
}

void Fixed::setRawBits(int const raw)
{
    value = raw;
}

float Fixed::toFloat( void ) const
{
    return (this->value / (float)(1 << bits));
}

int Fixed::toInt( void ) const
{
    return (roundf(this->value / (float)(1 << bits)));
}

std::ostream &operator<<(std::ostream &out, Fixed const &value)
{
    out << value.toFloat();
    return (out);
}