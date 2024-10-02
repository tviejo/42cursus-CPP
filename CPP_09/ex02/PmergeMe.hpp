/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 20:12:34 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/02 22:19:24 by tviejo           ###   ########.fr       */
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

class PmergeMe
{
    public:
        static std::vector<int> fordJhonsonVectorSort(std::vector<int> &vector);
        static std::deque<int> fordJhonsonDequeSort(std::deque<int> &deque);
        static void displayVector(const std::vector<int> &vector);
        static void displayDeque(const std::deque<int> &deque);
    private:
        PmergeMe(void);
        ~PmergeMe(void);
        PmergeMe(const PmergeMe &src);
        PmergeMe &operator=(const PmergeMe &src);
        
};

#endif