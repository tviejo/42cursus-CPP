/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ChainedList.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 09:38:47 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/23 09:39:36 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAINEDLIST_HPP
# define CHAINEDLIST_HPP

# include <string>

struct Node
{
            void *ptr;
            Node *next;
            Node(void *ptr) : ptr(ptr), next(NULL) {}
};

#endif