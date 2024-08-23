/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:56:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/23 14:04:56 by tviejo           ###   ########.fr       */
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
    std::cout << meta->getType() << std::endl;
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << std::endl;
    j->makeSound();
    i->makeSound();
    meta->makeSound();

    std::cout << std::endl << "test deep copy" << std::endl;
    const Animal* x = new Cat();
    {
        const Animal* z(x);
        z->makeSound();
    }
    x->makeSound();
    std::cout << std::endl;
    const Animal* y = new Cat();
    {
        const Animal* z = y;
        z->makeSound();
    }
    y->makeSound();
    std::cout << std::endl << std::endl;


    const WrongAnimal* k = new WrongCat();
    k->makeSound();

    std::cout << std::endl << std::endl;
    delete y;
    delete k;
    delete meta;
    delete j;
    delete i;
    delete x;

    return 0;
}