/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   GarbageCollector.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:55:59 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/23 09:38:13 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "GarbageCollector.hpp"

GarbageCollector::GarbageCollector() : head(NULL)
{
}

GarbageCollector::GarbageCollector(const GarbageCollector &copy) : head(NULL)
{
    Node *current = copy.head;
    while (current) {
        collectGarbage(current->ptr);
        current = current->next;
    }
}

GarbageCollector &GarbageCollector::operator=(const GarbageCollector &copy) {
    if (this != &copy) {
        freeGarbage();
        Node *current = copy.head;
        while (current) {
            collectGarbage(current->ptr);
            current = current->next;
        }
    }
    return *this;
}

GarbageCollector::~GarbageCollector()
{
    freeGarbage();
}

void GarbageCollector::collectGarbage(void *ptr)
{
    Node *newNode = new Node(ptr);
    newNode->next = head;
    head = newNode;
}

void GarbageCollector::freeGarbage()
{
    Node *current = head;
    while (current) {
        Node *next = current->next;
        delete static_cast<AMateria*>(current->ptr);
        delete current;
        current = next;
    }
    head = NULL;
}