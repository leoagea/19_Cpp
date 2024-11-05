/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:00:13 by lagea             #+#    #+#             */
/*   Updated: 2024/11/03 23:50:17 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.hpp"

#include <iostream>
#include <vector>

int main()
{
	{
		std::vector<int> vec;
		for (int i=0; i < 15; i++)
			vec.push_back(i);

		try
		{
			std::cout << *easyfind(vec, 5) << std::endl;
			// std::cout << *easyfind(vec, 20) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}

		std::cout << std::endl;
		std::cout << "============================" << std::endl;
		std::cout << std::endl;
	
	{
		
	}
}
