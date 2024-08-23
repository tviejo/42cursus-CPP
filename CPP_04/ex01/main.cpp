/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 19:56:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/23 13:24:30 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "dog.hpp"
# include "cat.hpp"
# include "animal.hpp"


int main()
{
    Animal *animal[10];
    for (int i = 0; i < 10; i++)
    {
        std::cout << "---------" << i << "----------" << std::endl;
        if (i % 2 == 0)
            animal[i] = new Dog();
        else
            animal[i] = new Cat();
        std::cout << "---------------------" << std::endl;
        animal[i]->makeSound();
        std::cout << std::endl;
    }
    for (int i = 0; i < 10; i++)
    {
        std::cout << "---------" << i << "----------" << std::endl;
        delete animal[i];
        std::cout << std::endl;
    }

    std::cout << std::endl << "test deep copy" << std::endl;

    const Animal* x = new Cat();
    {
        const Animal* z(x);
        z->makeSound();
        const Animal* y = x;
        y->makeSound();
    }
    x->makeSound();
    std::cout << std::endl << std::endl;
    delete x;
    return 0;
}