/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:35:18 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/12 11:59:56 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>

int main( int argc, char *argv[])
{
    std::string str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    if (argc == 1)
        std::cout << str;
    else
    {
        for (int i = 1; i < argc; i++)
        {
            str = argv[i];
            std::transform(str.begin(), str.end(), str.begin(), ::toupper);
            std::cout << str;
        }
    }
    return (EXIT_SUCCESS);
}