/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:56:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/23 09:47:53 by tviejo           ###   ########.fr       */
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

meta->makeSound();
j->makeSound();
i->makeSound();

const Animal* x = new Cat();
{
    const Animal* z(x);
    std::cout << "copy making sound" << std::endl;
    z->makeSound();
}
std::cout << "original making sound" << std::endl;
x->makeSound();

const Animal* copymeta = meta;
const Animal* copyj = j;
const Animal* copyi = i;
copymeta->makeSound();
copyi->makeSound();
copyj->makeSound();

Dog basic;
{
    Dog tmp = basic;
}
basic.makeSound();

Dog basic_2;
{
    Dog tmp(basic_2);
}
basic_2.makeSound();

delete copymeta;
delete copyj;
delete copyi;
delete x;
}