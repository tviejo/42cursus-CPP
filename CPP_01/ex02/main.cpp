/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 22:36:11 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/13 22:42:50 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";

    std::string *stringPTR = &str;
    std::string& stringREF = str;

    std::cout << std::endl << "adress str:       " << &str << std::endl;
    std::cout << "adress stringPTR: " << stringPTR << std::endl;
    std::cout << "adress stringREF: " << &stringREF << std::endl << std::endl;

    std::cout << "value str:        " << str << std::endl;
    std::cout << "value stringPTR:  " << *stringPTR << std::endl;
    std::cout << "value stringREF:  " << stringREF << std::endl;
    return (0);
}