/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:12:34 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/03 22:39:53 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <string>
# include <exception>
# include <fstream>
# include <sstream>
# include <vector>
# include <deque>
# include <algorithm>

# define SHOWDEBUG 0

# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define WHITE "\033[37m"
# define END "\033[0m"

class PmergeMe
{
    public:
        static std::vector<int> fordJhonsonVectorSort(std::vector<int> &vector);
        static std::deque<int> fordJhonsonDequeSort(std::deque<int> &deque);
        static bool isSortable(const std::vector<int> vector);
        static void displayVector(const std::vector<int> &vector, std::string color);
        static void displayDeque(const std::deque<int> &deque, std::string color);
    private:
        PmergeMe(void);
        ~PmergeMe(void);
        PmergeMe(const PmergeMe &src);
        PmergeMe &operator=(const PmergeMe &src);
        
};

#endif