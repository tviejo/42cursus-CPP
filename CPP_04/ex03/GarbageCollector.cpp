/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GarbageCollector.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:55:59 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/22 12:36:26 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "GarbageCollector.hpp"

GarbageCollector::GarbageCollector()
{
}

GarbageCollector::GarbageCollector(const GarbageCollector &copy)
{
    this->garbage = copy.garbage;
}

GarbageCollector & GarbageCollector::operator=(const GarbageCollector &copy)
{
    this->garbage = copy.garbage;
    return *this;
}

GarbageCollector::~GarbageCollector()
{
    freeGarbage();
}

void GarbageCollector::collectGarbage(void *ptr)
{
    garbage.push_back(ptr);
}

void GarbageCollector::freeGarbage()
{
    for (size_t i = 0; i < garbage.size(); ++i)
    {
        delete static_cast<AMateria*>(garbage[i]);
    }
    garbage.clear();
}