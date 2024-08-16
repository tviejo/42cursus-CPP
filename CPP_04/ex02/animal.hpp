/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:43:02 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 22:31:17 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <string>
# include <iostream>

class Animal
{
    protected:
        std::string type;
        Animal();
        Animal(std::string type);
        Animal(const Animal &copy);
        Animal &operator=(const Animal &copy);
        std::string getType() const;
    private:
    public:
        virtual ~Animal();
        virtual void makeSound() const;
};

#endif