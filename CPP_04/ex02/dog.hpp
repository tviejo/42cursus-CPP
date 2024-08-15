/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:55:50 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 22:26:50 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "animal.hpp"
# include "brain.hpp"

class Dog : public Animal
{
    private:
        Brain *brain;
    public:
        Dog();
        virtual ~Dog();
        Dog &operator=(const Dog &value);
        void makeSound() const;
};

#endif