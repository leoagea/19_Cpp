/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 23:00:13 by lagea             #+#    #+#             */
/*   Updated: 2024/11/02 02:04:44 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/iter.hpp"

#include <iostream>

int main()
{
	std::cout << "==========INT==========" << std::endl;
	int arr[5] = {1, 2, 5, 3, 4};
	iter(arr, static_cast<int>(sizeof(arr) / sizeof(arr[0])), displayT);
	std::cout << std::endl;
	
	std::cout << "==========CHAR==========" << std::endl;
	char arr1[5] = {'a', 'f', 'g', 'j', 'w'};
	iter(arr1, static_cast<int>(sizeof(arr1) / sizeof(arr1[0])), displayT);
	std::cout << std::endl;
	
	std::cout << "==========DOUBLE==========" << std::endl;
	double arr2[5] = {19.1, 42.42, 0.0, 4.19, -1.4};
	iter(arr2, static_cast<int>(sizeof(arr2) / sizeof(arr2[0])), displayT);
	std::cout << std::endl;
	
	std::cout << "==========STRING==========" << std::endl;
	std::string arr3[5] = {"Hello", "World", "How", "Are", "You"};
	iter(arr3, static_cast<int>(sizeof(arr3) / sizeof(arr3[0])), displayT);
	std::cout << std::endl;
	return 0;
}
