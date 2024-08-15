/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/15 21:50:34 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/15 21:58:17 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

# include <iostream>
# include <string>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain();
        Brain(std::string idea);
        ~Brain();
        Brain(const Brain &copy);
        Brain &operator=(const Brain &copy);
        std::string getIdea(int index) const;
};

#endif