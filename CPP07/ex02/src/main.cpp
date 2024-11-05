/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:00:13 by lagea             #+#    #+#             */
/*   Updated: 2024/11/05 17:55:57 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Array.hpp"

#include <iostream>

int main()
{
	{
		std::cout << std::endl;

		Array<int> a;
		Array<int> b(4);
		Array<int> c(2);
		Array<int> d(c);
		c[0] = 10;
		std::cout << "a:" << a << std::endl;
		std::cout << "b:" << b << std::endl;
		std::cout << "c:" <<c << std::endl;
		c = b;
		b[2] = 5;
		try {
			b[6] = 0;
		} catch(std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
		std::cout << a.size() << "-" << b.size() << std::endl;
		std::cout << "b:" << b << std::endl;
		std::cout << "c:" <<c << std::endl;
		std::cout << "d:" <<d << std::endl;
	}

		std::cout << std::endl;
		std::cout << "============================" << std::endl;
		std::cout << std::endl;
	
	{
		Array<std::string> a;
		Array<std::string> b(4);
		Array<std::string> c(2);
		Array<std::string> d(a);

		c[0] = "Eric";
		std::cout << "a:" <<a << std::endl;
		std::cout << "b:" <<b << std::endl;
		std::cout << "c:" <<c << std::endl;
		c = b;
		b[2] = "Michel";
		try {
			b[6] = "Erreur";
		} catch(std::exception &e) {
			std::cout << "Error: " << e.what() << std::endl;
		}
		std::cout << a.size() << "-" << b.size() << std::endl;
		std::cout << "b:" <<b << std::endl;
		std::cout << "c:" <<c << std::endl;
		std::cout << "d:" <<d << std::endl;

		std::cout << std::endl;

	}
}
