/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:32:10 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/28 18:06:35 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Serializer.hpp"

int main()
{
    Data            data;
    uintptr_t        raw;

    data.s1 = "Hello";
    data.s2 = "World";
    data.n = 42;
    raw = Serializer::serialize(&data);
    std::cout << Serializer::deserialize(raw)->s1 << " " << Serializer::deserialize(raw)->s2 << " " << Serializer::deserialize(raw)->n << std::endl;
    return (0);
}