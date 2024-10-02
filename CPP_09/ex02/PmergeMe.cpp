/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 21:51:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/02 22:19:19 by tviejo           ###   ########.fr       */
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
}

void findMinMaxPairsDeques(const std::deque<int>& data, std::vector<int>& minima, std::vector<int>& maxima)
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
}

void binaryInsertVector(std::vector<int>& sortedData, int element)
{
    std::vector<int>::iterator it = std::lower_bound(sortedData.begin(), sortedData.end(), element);
    sortedData.insert(it, element);
}

void binaryInsertDeque(std::deque<int>& sortedData, int element)
{
    std::deque<int>::iterator it = std::lower_bound(sortedData.begin(), sortedData.end(), element);
    sortedData.insert(it, element);
}

std::vector<int> mergeSortedVectors(const std::vector<int>& vec1, const std::vector<int>& vec2)
{
    std::vector<int> merged;
    size_t i = 0, j = 0;
    size_t n1 = vec1.size(), n2 = vec2.size();

    while (i < n1 && j < n2)
    {
        if (vec1[i] <= vec2[j])
            merged.push_back(vec1[i++]);
        else
            merged.push_back(vec2[j++]);
    }
    while (i < n1)
        merged.push_back(vec1[i++]);
    while (j < n2)
        merged.push_back(vec2[j++]);
    return merged;
}

std::deque<int> mergeSortedDeques(const std::deque<int>& deq1, const std::deque<int>& deq2)
{
    std::deque<int> merged;
    size_t i = 0, j = 0;
    size_t n1 = deq1.size(), n2 = deq2.size();

    while (i < n1 && j < n2)
    {
        if (deq1[i] <= deq2[j])
            merged.push_back(deq1[i++]);
        else
            merged.push_back(deq2[j++]);
    }
    while (i < n1)
        merged.push_back(deq1[i++]);
    while (j < n2)
        merged.push_back(deq2[j++]);
    return merged;
}

std::vector<int> PmergeMe::fordJhonsonVectorSort(std::vector<int>& data)
{
    if (data.size() <= 1)
        return data;
    std::vector<int> minima;
    std::vector<int> maxima;
    findMinMaxPairsVectors(data, minima, maxima);
    std::vector<int> sortedMinima = fordJhonsonVectorSort(minima);
    for (std::vector<int>::const_iterator it = maxima.begin(); it != maxima.end(); ++it)
    {
        const int& maxElement = *it;
        binaryInsertVector(sortedMinima, maxElement);
    }

    return sortedMinima;
}

std::deque<int> PmergeMe::fordJhonsonDequeSort(std::deque<int>& data)
{
    if (data.size() <= 1)
        return data;
    std::vector<int> minima;
    std::vector<int> maxima;
    findMinMaxPairsDeques(data, minima, maxima);
    std::vector<int> sortedMinima = fordJhonsonVectorSort(minima);
    for (std::vector<int>::const_iterator it = maxima.begin(); it != maxima.end(); ++it)
    {
        const int& maxElement = *it;
        binaryInsertVector(sortedMinima, maxElement);
    }
    return std::deque<int>(sortedMinima.begin(), sortedMinima.end());
}


void PmergeMe::displayVector(const std::vector<int>& vec)
{
    for (std::vector<int>::const_iterator it = vec.begin(); it != vec.end(); ++it)
    {
        const int& num = *it;
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void PmergeMe::displayDeque(const std::deque<int>& deq)
{
    for (std::deque<int>::const_iterator it = deq.begin(); it != deq.end(); ++it)
    {
        const int& num = *it;
        std::cout << num << " ";
    }
    std::cout << std::endl;
}
