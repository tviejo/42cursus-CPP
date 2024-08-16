/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:24:54 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 10:40:58 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
    private:
        int value;
        static const int bits = 8;
    public:
        Fixed();
        Fixed(int const value);
        Fixed(const float value);
        ~Fixed();
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &copy);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat( void ) const;
        int toInt( void ) const;
        static Fixed &min(Fixed &nb1, Fixed &nb2);
        static const Fixed &min(const Fixed &nb1, const Fixed &nb2);
        static Fixed &max(Fixed &nb1, Fixed &nb2);
        static const Fixed &max(const Fixed &nb1, const Fixed &nb2);
        bool operator>(const Fixed &nb1);
        bool operator<(const Fixed &nb1);
        bool operator>=(const Fixed &nb1);
        bool operator<=(const Fixed &nb1);
        bool operator==(const Fixed &nb1);
        bool operator!=(const Fixed &nb1);
        Fixed operator+(const Fixed &nb1);
        Fixed operator-(const Fixed &nb1);
        Fixed operator*(const Fixed &nb1);
        Fixed operator/(const Fixed &nb1);
        Fixed &operator++();
        Fixed operator++(int);
        Fixed &operator--();
        Fixed operator--(int);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif