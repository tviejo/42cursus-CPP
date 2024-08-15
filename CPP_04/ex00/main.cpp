/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:56:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 22:20:40 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "dog.hpp"
# include "cat.hpp"
# include "animal.hpp"
# include "wrongcat.hpp"
# include "wronganimal.hpp"


int main()
{
const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << meta->getType() << " " << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
j->makeSound(); //will output the cat sound!
i->makeSound();
meta->makeSound();

const Animal* copymeta = meta;
const Animal* copyj = j;
const Animal* copyi = i;

copymeta->makeSound();
copyj->makeSound();
copyi->makeSound();

const WrongAnimal* wrong_meta = new WrongAnimal();
const WrongAnimal* wrong_i = new WrongCat();
std::cout << wrong_meta->getType() << " " << std::endl;
std::cout << wrong_i->getType() << " " << std::endl;
wrong_meta->makeSound();
wrong_i->makeSound();

delete copymeta;
delete copyj;
delete copyi;
delete wrong_meta;
delete wrong_i;

return 0;
}