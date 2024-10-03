/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:51:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/03 22:43:02 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
}

PmergeMe::~PmergeMe(void)
{
}

PmergeMe::PmergeMe(const PmergeMe &src)
{
    *this = src;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &src)
{
    if (this != &src)
    {
    }
    return (*this);
}

bool PmergeMe::isSortable(const std::vector<int> vector)
{
    if (vector.size() <= 1)
    {
        std::cerr << "Error: vector is not sortable" << std::endl;
        return false;
    }
    for (std::vector<int>::const_iterator it = vector.begin(); it != vector.end(); ++it)
    {
        const int& num = *it;
        if (num < 0)
        {
            std::cerr << "Error: negative value found" << std::endl;
            return false;
        }
    }
    return true;
}

void printminimamaximavector(std::vector<int> &minima, std::vector<int> &maxima)
{
    if (SHOWDEBUG == 0)
        return;
    std::cout << YELLOW << "minima: ";
    for (std::vector<int>::const_iterator it = minima.begin(); it != minima.end(); ++it)
    {
        const int& num = *it;
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << "maxima: ";
    for (std::vector<int>::const_iterator it = maxima.begin(); it != maxima.end(); ++it)
    {
        const int& num = *it;
        std::cout << num << " ";
    }
    std::cout << END << std::endl;
}

void printsortedminimavector(std::vector<int> &sortedMinima)
{
    if (SHOWDEBUG == 0)
        return;
    std::cout << RED << "sorted minima: ";
    for (std::vector<int>::const_iterator it = sortedMinima.begin(); it != sortedMinima.end(); ++it)
    {
        const int& num = *it;
        std::cout << num << " ";
    }
    std::cout << END << std::endl;
}

void printminimamaximadeque(std::deque<int> &minima, std::deque<int> &maxima)
{
    if (SHOWDEBUG == 0)
        return;
    std::cout << YELLOW << "minima: ";
    for (std::deque<int>::const_iterator it = minima.begin(); it != minima.end(); ++it)
    {
        const int& num = *it;
        std::cout << num << " ";
    }
    std::cout << std::endl;
    std::cout << "maxima: ";
    for (std::deque<int>::const_iterator it = maxima.begin(); it != maxima.end(); ++it)
    {
        const int& num = *it;
        std::cout << num << " ";
    }
    std::cout << END << std::endl;
}

void printsortedminimadeque(std::deque<int> &sortedMinima)
{
    if (SHOWDEBUG == 0)
        return;
    std::cout << RED << "sorted minima: ";
    for (std::deque<int>::const_iterator it = sortedMinima.begin(); it != sortedMinima.end(); ++it)
    {
        const int& num = *it;
        std::cout << num << " ";
    }
    std::cout << END << std::endl;
}

void PmergeMe::displayVector(const std::vector<int>& vec, std::string color)
{
    std::cout << color << "vector sorted: ";
    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        const int& num = *it;
        std::cout << num << " ";
    }
    std::cout << END << std::endl;
}

void PmergeMe::displayDeque(const std::deque<int>& deq, std::string color)
{
    std::cout << color << "deque sorted: ";
    for (std::deque<int>::const_iterator it = deq.begin(); it != deq.end(); ++it)
    {
        const int& num = *it;
        std::cout << num << " ";
    }
    std::cout << END << std::endl;
}

void findMinMaxPairsVectors(const std::vector<int>& data, std::vector<int>& minima, std::vector<int>& maxima)
{
    size_t i = 0;
    size_t n = data.size();

    while (i + 1 < n)
    {
        if (data[i] < data[i + 1])
        {
            minima.push_back(data[i]);
            maxima.push_back(data[i + 1]);
        }
        else
        {
            minima.push_back(data[i + 1]);
            maxima.push_back(data[i]);
        }
        i += 2;
    }
    if (i < n)
        minima.push_back(data[i]);
    printminimamaximavector(minima, maxima);
}

void BinaryInsertVector(std::vector<int>& sortedData, int element, int low, int high)
{
    if (low >= high)
    {
        sortedData.insert(sortedData.begin() + low, element);
        return;
    }
    int mid = (low + high) / 2;
    if (element < sortedData[mid])
        BinaryInsertVector(sortedData, element, low, mid - 1);
    else
        BinaryInsertVector(sortedData, element, mid + 1, high);
}

void insertMaximatoSortedMinimaVector(std::vector<int>& sortedMinima, std::vector<int>& maxima)
{
    for (std::vector<int>::const_iterator it = maxima.begin(); it != maxima.end(); ++it)
    {
        const int& maxElement = *it;
        BinaryInsertVector(sortedMinima, maxElement, 0, sortedMinima.size());
        printsortedminimavector(sortedMinima);
    }
}

std::vector<int> PmergeMe::fordJhonsonVectorSort(std::vector<int>& data)
{
    if (data.size() <= 1)
        return data;
    std::vector<int> minima;
    std::vector<int> maxima;
    minima.reserve(data.size() / 2 + 1);
    maxima.reserve(data.size() / 2 + 1);
    findMinMaxPairsVectors(data, minima, maxima);
    std::vector<int> sortedMinima = fordJhonsonVectorSort(minima);
    sortedMinima.reserve(data.size());
    insertMaximatoSortedMinimaVector(sortedMinima, maxima);
    return sortedMinima;
}

void findMinMaxPairsDeques(const std::deque<int>& data, std::deque<int>& minima, std::deque<int>& maxima)
{
    size_t i = 0;
    size_t n = data.size();

    while (i + 1 < n)
    {
        if (data[i] < data[i + 1])
        {
            minima.push_back(data[i]);
            maxima.push_back(data[i + 1]);
        }
        else
        {
            minima.push_back(data[i + 1]);
            maxima.push_back(data[i]);
        }
        i += 2;
    }
    if (i < n)
        minima.push_back(data[i]);
    printminimamaximadeque(minima, maxima);
}

void BinaryInsertDeque(std::deque<int>& sortedData, int element, int low, int high)
{
    if (low >= high)
    {
        sortedData.insert(sortedData.begin() + low, element);
        return;
    }
    int mid = (low + high) / 2;
    if (element < sortedData[mid])
        BinaryInsertDeque(sortedData, element, low, mid - 1);
    else
        BinaryInsertDeque(sortedData, element, mid + 1, high);
}

void    insertMaximatoSortedMinimaDeque(std::deque<int>& sortedMinima, std::deque<int>& maxima)
{
    for (std::deque<int>::const_iterator it = maxima.begin(); it != maxima.end(); ++it)
    {
        const int& maxElement = *it;
        BinaryInsertDeque(sortedMinima, maxElement, 0, sortedMinima.size());
        printsortedminimadeque(sortedMinima);
    }
}

std::deque<int> PmergeMe::fordJhonsonDequeSort(std::deque<int>& data)
{
    if (data.size() <= 1)
        return data;
    std::deque<int> minima;
    std::deque<int> maxima;
    findMinMaxPairsDeques(data, minima, maxima);
    std::deque<int> sortedMinima = fordJhonsonDequeSort(minima);
    insertMaximatoSortedMinimaDeque(sortedMinima, maxima);
    return std::deque<int>(sortedMinima.begin(), sortedMinima.end());
}

