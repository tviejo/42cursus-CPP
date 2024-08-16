/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrong_cat.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:49:10 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 21:01:19 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_H
# define WRONGCAT_H

# include "wronganimal.hpp"

class WrongCat : public WrongAnimal
{
    public:
        WrongCat();
        ~WrongCat();
        WrongCat &operator=(const WrongCat &value);
        void makeSound() const;
};

#endif