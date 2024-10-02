/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:54:33 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/02 22:29:19 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

int main(int argc, char **argv)
{
    std::vector<int> data;
    std::deque<int> data2;
    if (argc < 2)
    {
        std::cout << "usage: ./pmergeMe [data]" << std::endl;
        return (1);
    }
    int i = 1;
    while (i < argc)
    {
        data.push_back(atoi(argv[i]));
        data2.push_back(atoi(argv[i]));
        i++;
    }
    std::cout << "sorted vector: " << std::endl;
    PmergeMe::displayVector(PmergeMe::fordJhonsonVectorSort(data));
    std::cout << "sorted deque: " << std::endl;
    PmergeMe::displayDeque(PmergeMe::fordJhonsonDequeSort(data2));

    return (0);
}