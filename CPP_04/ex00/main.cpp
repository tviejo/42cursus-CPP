/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:56:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/21 13:58:27 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "dog.hpp"
# include "cat.hpp"
# include "animal.hpp"


int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();

std::cout << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << std::endl;
j->makeSound(); //will output the cat sound!
i->makeSound();
meta->makeSound();

std::cout << std::endl << std::endl;

const Animal* copymeta = meta;
const Animal* copyj = j;
const Animal* copyi = i;

std::cout << std::endl;
copyj->makeSound();
copyi->makeSound();
copymeta->makeSound();
std::cout << std::endl << std::endl;

std::cout << std::endl << std::endl;
delete copymeta;
delete copyj;
delete copyi;

return 0;
}