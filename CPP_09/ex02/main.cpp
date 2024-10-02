/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:54:33 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/02 23:18:30 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"
# include <ctime>

double convertclocktous(struct timespec start, struct timespec end)
{
    return ((end.tv_nsec - start.tv_nsec) / 1000);
}

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
    struct timespec start, end;
    clock_gettime(CLOCK_REALTIME, &start);
    PmergeMe::displayVector(PmergeMe::fordJhonsonVectorSort(data));
    clock_gettime(CLOCK_REALTIME, &end);
    std::cout << "total time: " << convertclocktous(start, end) << std::endl;
    clock_gettime(CLOCK_REALTIME, &start);
    PmergeMe::displayDeque(PmergeMe::fordJhonsonDequeSort(data2));
    clock_gettime(CLOCK_REALTIME, &end);
    std::cout << "total time: " << convertclocktous(start, end) << std::endl;

    return (0);
}