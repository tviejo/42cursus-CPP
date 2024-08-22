/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:56:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/22 12:48:37 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "dog.hpp"
# include "cat.hpp"
# include "animal.hpp"


int main()
{
const Animal* j = new Dog();
const Animal* i = new Cat();

//  const Animal* meta = new Animal();
//  meta->makeSound();
//  delete meta;

const Animal* x = new Cat();
{
    const Animal* z(x);
    std::cout << "copy making sound" << std::endl;
    z->makeSound();
}
std::cout << "original making sound" << std::endl;
x->makeSound();

j->makeSound();
i->makeSound();

const Animal* copyj = j;
const Animal* copyi = i;
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
basic.makeSound();

delete copyj;
delete copyi;
}