/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:49:27 by lagea             #+#    #+#             */
/*   Updated: 2024/11/02 02:05:00 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ITER_HPP__
#define __ITER_HPP__

#include <iostream>

template <typename T> void displayT(T const& t)
{
	std::cout << t << std::endl;
}

template <typename T> void iter(T *arr, int len, void(*f)(T const&))
{
	for (int i=0; i < len; i++)
		f(arr[i]);
} 

#endif
