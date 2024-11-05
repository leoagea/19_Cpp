/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:00:13 by lagea             #+#    #+#             */
/*   Updated: 2024/11/05 17:11:28 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

#include <iostream>

int main()
{
	try
    {
        Span sp(5);

        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest span: " << sp.longestSpan() << std::endl;

        sp.addNumber(42);
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    try
    {
        Span largeSpan(10000);
        srand(static_cast<unsigned int>(time(0)));
        std::vector<int> randomNumbers;
        for (int i = 0; i < 10000; ++i)
        {
            randomNumbers.push_back(rand());
        }
        largeSpan.addRange(randomNumbers.begin(), randomNumbers.end());
        std::cout << "Shortest span (large test): " << largeSpan.shortestSpan() << std::endl;
        std::cout << "Longest span (large test): " << largeSpan.longestSpan() << std::endl;
    }
    catch (std::exception &e)
    {
        std::cerr << "Error: " << e.what() << std::endl;
    }
}
