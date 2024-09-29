/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:30:01 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/29 19:40:39 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"
# include <vector>

int main(void)
{
    std::vector<int> vec;

    for (int i = 0; i < 10; i++)
        vec.push_back(i);

    try
    {
        std::vector<int>::iterator it = easyfind(vec, 5);
        std::cout << "found value: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "value not found" << std::endl;
    }

    try
    {
        std::vector<int>::iterator it = easyfind(vec, 42);
        std::cout << "found value: " << *it << std::endl;
    }
    catch (std::exception &e)
    {
        std::cout << "value not found" << std::endl;
    }

    return 0;
}