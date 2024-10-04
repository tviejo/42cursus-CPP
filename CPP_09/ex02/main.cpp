/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:54:33 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/04 11:32:50 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"
# include "Timer.hpp"
# include <ctime>

void    displayvector(std::vector<int> &vector)
{
    for (std::vector<int>::const_iterator it = vector.begin(); it != vector.end(); ++it)
    {
        const int& num = *it;
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

int main(int argc, char **argv)
{
    std::vector<int> vector, mainvector;
    std::deque<int> deque;
    if (argc < 2)
    {
        std::cout << "usage: ./pmergeMe [data]" << std::endl;
        return (1);
    }
    int i = 1;
    if (DELETEALLPRINTS == 0)
        std::cout << "before:        " ;
    while (i < argc)
    {
        if (DELETEALLPRINTS == 0)
            std::cout << atoi(argv[i]) << " ";
        vector.push_back(atoi(argv[i]));
        mainvector.push_back(atoi(argv[i]));
        deque.push_back(atoi(argv[i]));
        i++;
    }
    if (DELETEALLPRINTS == 0)
        std::cout << std::endl << "after:         ";
    if (!PmergeMe::isSortable(vector))
        return (1);
    Timer vectorTimer, dequeTimer, mainTimer;
    mainTimer.startTimer();
    sort(mainvector.begin(), mainvector.end());
    mainTimer.stopTimer();
    if (DELETEALLPRINTS == 0)
        displayvector(mainvector);
    vectorTimer.startTimer();
    vector = PmergeMe::fordJhonsonVectorSort(vector);
    vectorTimer.stopTimer();
    if (DELETEALLPRINTS == 0)
        PmergeMe::displayVector(vector, GREEN);
    dequeTimer.startTimer();
    deque = PmergeMe::fordJhonsonDequeSort(deque);
    dequeTimer.stopTimer();
    if (DELETEALLPRINTS == 0)
        PmergeMe::displayDeque(deque, GREEN);
    std::cout << "time to proccess a range of " << vector.size() << " elements with vector:        " << vectorTimer.getElapsedTimeMicroseconds() << " us" << std::endl;
    std::cout << "time to proccess a range of " << deque.size() << " elements with deque:         " << dequeTimer.getElapsedTimeMicroseconds() << " us" << std::endl;
    std::cout << "time to proccess a range of " << mainvector.size() << " elements with sort function: " << mainTimer.getElapsedTimeMicroseconds() << " us" << std::endl;

    return (0);
}