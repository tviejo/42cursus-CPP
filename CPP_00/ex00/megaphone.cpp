/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/12 10:35:18 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/14 11:52:34 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main( int argc, char *argv[])
{
    int j = 0;

    std::string str = "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    if (argc == 1)
        std::cout << str;
    else
    {
        for (int i = 1; i < argc; i++)
        {
            str = argv[i];
            j = 0;
            while (str[j] != '\0')
            {
                str[j] = std::toupper(str[j]);
                j++;
            }
            std::cout << str;
        }
    }
    std::cout << std::endl;
    return (0);
}