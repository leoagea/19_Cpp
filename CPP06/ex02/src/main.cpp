/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:00:13 by lagea             #+#    #+#             */
/*   Updated: 2024/11/01 18:39:58 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Base.hpp"
#include "../inc/A.hpp"
#include "../inc/B.hpp"
#include "../inc/C.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>

Base* generate()
{
    int randomValue = rand() % 3;

    if (randomValue == 0)
    {
        std::cout << "Generated: A" << std::endl;
        return new A();
    }
    else if (randomValue == 1)
    {
        std::cout << "Generated: B" << std::endl;
        return new B();
    }
    else
    {
        std::cout << "Generated: C" << std::endl;
        return new C();
    }
}

void identify(Base* p)
{
    if (p == NULL)
    {
        std::cout << "Pointer identifies: NULL" << std::endl;
        return;
    }

    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "Pointer identifies: A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "Pointer identifies: B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "Pointer identifies: C" << std::endl;
    else
        std::cout << "Pointer identifies: Unknown type" << std::endl;
}

void identify(Base& p)
{
    try
    {
        A& a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "Reference identifies: A" << std::endl;
    }
    catch (...)
    {
        try
        {
            B& b = dynamic_cast<B&>(p);
            (void)b;
            std::cout << "Reference identifies: B" << std::endl;
        }
        catch (...)
        {
            try
            {
                C& c = dynamic_cast<C&>(p);
                (void)c;
                std::cout << "Reference identifies: C" << std::endl;
            }
            catch (...)
            {
                std::cout << "Reference identifies: Unknown type" << std::endl;
            }
        }
    }
}


/* Dynamic cast (with polymorphism): - used to know if an pointer object is the same class than the object we specify, return valid pointer if true or NULL if false
                                     - used to know if a reference object is the same class than the object we specify, return nothing if true or throw a bad_cast exception if false
*/
int main()
{
    srand(static_cast<unsigned int>(time(0)));
    
    Base* basePtr = generate();
    identify(basePtr);
    identify(*basePtr);

    delete basePtr;

    return 0;
}

