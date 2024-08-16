/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:24:52 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 13:19:15 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Fixed.hpp"

Fixed::Fixed()
{
    value = 0;
}

Fixed::~Fixed()
{
}

Fixed::Fixed(int const value)
{
    this->value = value << bits;
}

Fixed::Fixed(const float value)
{
    this->value = roundf(value * (1 << bits));
}

Fixed::Fixed(const Fixed &copy)
{
    *this = copy;
}

Fixed &Fixed::operator=(const Fixed &copy)
{
    value = copy.getRawBits();
    return (*this);
}

bool Fixed::operator>(const Fixed &nb1)
{
    return (this->value > nb1.getRawBits());
}

bool Fixed::operator<(const Fixed &nb1)
{
    return (this->value < nb1.getRawBits());
}

bool Fixed::operator>=(const Fixed &nb1)
{
    return (this->value >= nb1.getRawBits());
}

bool Fixed::operator<=(const Fixed &nb1)
{
    return (this->value <= nb1.getRawBits());
}

bool Fixed::operator==(const Fixed &nb1)
{
    return (this->value == nb1.getRawBits());
}

bool Fixed::operator!=(const Fixed &nb1)
{
    return (this->value != nb1.getRawBits());
}

Fixed Fixed::operator+(const Fixed &nb1)
{
    return (Fixed(this->toFloat() + nb1.toFloat()));
}

Fixed Fixed::operator-(const Fixed &nb1)
{
    return (Fixed(this->toFloat() - nb1.toFloat()));
}

Fixed Fixed::operator*(const Fixed &nb1)
{
    return (Fixed(this->toFloat() * nb1.toFloat()));
}

Fixed Fixed::operator/(const Fixed &nb1)
{
    return (Fixed(this->toFloat() / nb1.toFloat()));
}

Fixed &Fixed::operator++()
{
    value++;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    value++;
    return (tmp);
}

Fixed &Fixed::operator--()
{
    value--;
    return (*this);
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    value--;
    return(tmp);
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

Fixed &Fixed::min(Fixed &nb1, Fixed &nb2)
{
    if (nb1.getRawBits() < nb2.getRawBits())
        return nb1;
    else
        return nb2;
}

const Fixed &Fixed::min(const Fixed &nb1, const Fixed &nb2)
{
    if (nb1.getRawBits() < nb2.getRawBits())
        return nb1;
    else
        return nb2;
}

Fixed &Fixed::max(Fixed &nb1, Fixed &nb2)
{
    if (nb1.getRawBits() > nb2.getRawBits())
        return nb1;
    else
        return nb2;
}

const Fixed &Fixed::max(const Fixed &nb1, const Fixed &nb2)
{
    if (nb1.getRawBits() > nb2.getRawBits())
        return nb1;
    else
        return nb2;
}