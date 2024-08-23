/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GarbageCollector.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:53:27 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/23 09:39:44 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef GARBAGECOLECTOR_HPP
# define GARBAGECOLECTOR_HPP

# include "AMateria.hpp"
# include "ChainedList.hpp"
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
        Node *head;
    public:
        void collectGarbage(void *ptr);
        void freeGarbage();
};

# endif