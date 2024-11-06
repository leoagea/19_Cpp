/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:00:13 by lagea             #+#    #+#             */
/*   Updated: 2024/11/06 13:00:27 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/easyfind.hpp"

#include <iostream>
#include <vector>
#include <list>
#include <deque>

int main()
{
	{
		std::vector<int> vec;
		for (int i=0; i < 10; i++)
			vec.push_back(i);

		try
		{
			std::cout << *easyfind(vec, 5) << std::endl;
			std::cout << *easyfind(vec, 20) << std::endl;
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
		std::list<int> lst;
		for (int i=0; i < 10; i++)
			lst.push_back(i);

		try
		{
			std::cout << *easyfind(lst, 5) << std::endl;
			std::cout << *easyfind(lst, 20) << std::endl;
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
		std::deque<int> queue;
		for (int i=0; i < 10; i++)
			queue.push_back(i);

		try
		{
			std::cout << *easyfind(queue, 5) << std::endl;
			std::cout << *easyfind(queue, 20) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
}
