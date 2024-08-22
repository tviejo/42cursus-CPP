/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:56:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/22 10:35:40 by tviejo           ###   ########.fr       */
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

std::cout << std::endl;
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
std::cout << std::endl;
j->makeSound(); //will output the cat sound!
i->makeSound();
meta->makeSound();

const Animal* x = new Cat();
{
    const Animal* z(x);
    std::cout << "copy making sound" << std::endl;
    z->makeSound();
}
std::cout << "original making sound" << std::endl;
x->makeSound();

std::cout << std::endl << std::endl;

const Animal* copymeta = meta;
const Animal* copyj = j;
const Animal* copyi = i;

std::cout << std::endl;
copyj->makeSound();
copyi->makeSound();
copymeta->makeSound();
std::cout << std::endl << std::endl;

const WrongAnimal* w = new WrongCat();
w->makeSound();

std::cout << std::endl << std::endl;
delete copymeta;
delete copyj;
delete copyi;
delete w;

return 0;
}