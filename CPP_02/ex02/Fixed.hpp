/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/14 20:24:54 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/14 22:20:12 by tviejo           ###   ########.fr       */
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
        Fixed &min(Fixed &nb1, Fixed &nb2);
        Fixed &min(const Fixed &nb1, const Fixed &nb2);
        Fixed &max(Fixed &nb1, Fixed &nb2);
        Fixed &max(const Fixed &nb1, const Fixed &nb2);
};

std::ostream &operator<<(std::ostream &out, Fixed const &value);

#endif