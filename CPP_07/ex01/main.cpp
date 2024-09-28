/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 19:17:23 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/28 19:33:44 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"
# include <iostream>

void    print(int i) {
    std::cout << i << std::endl;
}

void    increment(int &i) {
    i++;
}

void    decrement(int &i) {
    i--;
}

int main(void)
{
    int tab[] = {0, 1, 2, 3, 4};
    iter(tab, 5, print);
    std::cout << std::endl;

    void (*funcs[])(int &) = {increment, decrement};
    iter(tab, 5, funcs[0]);
    iter(tab, 5, print);
    std::cout << std::endl;

    iter(tab, 5, funcs[1]);
    iter(tab, 5, print);
    std::cout << std::endl;

    char tab2[] = {'a', 'b', 'c', 'd', 'e'};
    iter(tab2, 5, print);
    std::cout << std::endl;
    
    return 0;
}
