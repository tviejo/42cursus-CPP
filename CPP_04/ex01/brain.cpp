/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:50:30 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/21 14:17:40 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "brain.hpp"

Brain::Brain()
{
    std::cout << "Default Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = "";
}

Brain::Brain(std::string idea)
{
    std::cout << "Parametric Brain constructor called" << std::endl;
    for (int i = 0; i < 100; i++)
        ideas[i] = idea;
}

Brain::~Brain()
{
    std::cout << "Default Brain destructor called" << std::endl;
}

Brain::Brain(const Brain &copy)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];
}

Brain & Brain::operator=(const Brain &copy)
{
    for (int i = 0; i < 100; i++)
        ideas[i] = copy.ideas[i];
    return (*this);
}

std::string Brain::getIdea(int index) const
{
    return (ideas[index]);
}