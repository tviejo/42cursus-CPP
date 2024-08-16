/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:56:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 22:32:44 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "dog.hpp"
# include "cat.hpp"
# include "animal.hpp"
# include "wrongcat.hpp"
# include "wronganimal.hpp"


int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();

// const Animal* meta = new Animal();
// meta->makeSound();
// delete meta;

j->makeSound();
i->makeSound();

const Animal* copyj = j;
const Animal* copyi = i;
copyi->makeSound();
copyj->makeSound();

delete copyj;
delete copyi;
}