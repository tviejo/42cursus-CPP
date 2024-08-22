/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GarbageCollector.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:53:27 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/22 12:36:53 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GARBAGECOLECTOR_HPP
# define GARBAGECOLECTOR_HPP

# include "AMateria.hpp"
# include <iostream>
# include <vector>

class GarbageCollector
{
    protected:
        GarbageCollector();
        GarbageCollector(const GarbageCollector &copy);
        GarbageCollector &operator=(const GarbageCollector &copy);
        ~GarbageCollector();
    private:
        std::vector<void *> garbage;
    public:
        void collectGarbage(void *ptr);
        void freeGarbage();
};

# endif