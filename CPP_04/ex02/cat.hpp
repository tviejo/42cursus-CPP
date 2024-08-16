/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:49:10 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 22:26:45 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "animal.hpp"
# include "brain.hpp"

class Cat : public Animal
{
    private:
        Brain *brain;
    public:
        Cat();
        virtual ~Cat();
        Cat &operator=(const Cat &value);
        void makeSound() const;
};

#endif