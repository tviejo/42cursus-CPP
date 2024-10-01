/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 14:03:41 by tviejo            #+#    #+#             */
/*   Updated: 2024/10/01 15:35:38 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "MutantStack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    MutantStack<int> s(mstack);

    std::cout << "test stack top" << std::endl;
    {
        std::cout << s.top() << std::endl;
    }

     std::cout << "test stack size" << std::endl;
    {
        std::cout << s.size() << std::endl;
    }

    std::cout << "test stack push" << std::endl;
    {
        s.push(42);
        std::cout << s.top() << std::endl;
    }

    std::cout << "test stack pop" << std::endl;
    {
        s.pop();
        std::cout << s.top() << std::endl;
    }

    std::cout << "test stack size" << std::endl;
    {
        std::cout << s.size() << std::endl;
    }

    std::cout << "test stack empty" << std::endl;
    {
        std::cout << s.empty() << std::endl;
        while (!s.empty())
            s.pop();
        std::cout << s.empty() << std::endl;
    }

    s.push(42);
    std::cout << "test stack begin" << std::endl;
    {
        MutantStack<int>::iterator it3 = s.begin();
        std::cout << *it3 << std::endl;
    }

    std::cout << "test stack end" << std::endl;
    {
        MutantStack<int>::iterator it4 = s.end();
        std::cout << *it4 << std::endl;
    }

    std::cout << "test iterator increment" << std::endl;
    {
        MutantStack<int>::iterator it5 = s.begin();
        std::cout << *it5 << std::endl;
        it5++;
        std::cout << *it5 << std::endl;
        it5++;
        std::cout << *it5 << std::endl;
        it5++;
        std::cout << *it5 << std::endl;
        it5++;
        std::cout << *it5 << std::endl;
        it5++;
        std::cout << *it5 << std::endl;
    }

    return 0;
}