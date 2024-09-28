/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 18:13:31 by tviejo            #+#    #+#             */
/*   Updated: 2024/09/28 19:02:31 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"
# include <cstdlib>

Base *generate(void)
{
    int a = rand() % 3;

    if (a == 0)
    {
        std::cout << "A is generated" << std::endl;
        return (new A);
    }
    else if (a == 1)
    {
        std::cout << "B is generated" << std::endl;
        return (new B);
    }
    else
    {
        std::cout << "C is generated" << std::endl;
        return (new C);
    }
}

void    identify(Base* localBase)
{
    if (dynamic_cast<A*>(localBase))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(localBase))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(localBase))
        std::cout << "C" << std::endl;
}

void    identify(Base& localBase)
{
    try
    {
        A a = dynamic_cast<A&>(localBase);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        B b = dynamic_cast<B&>(localBase);
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
    try
    {
        C c = dynamic_cast<C&>(localBase);
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {
    }
}

int main(void)
{
    srand(time(NULL));
    Base *base = generate();
    std::cout << "Identify by pointer: ";
    identify(base);
    std::cout << "Identify by reference: ";
    identify(*base);
    delete base;
    return (0);
}