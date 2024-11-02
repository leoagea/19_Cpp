/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:49:27 by lagea             #+#    #+#             */
/*   Updated: 2024/11/02 01:19:20 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WHATEVER_HPP__
#define __WHATEVER_HPP__

template <typename T> void swap(T &a, T &b)
{
	T temp;
	
	temp = a;
	a = b;
	b = temp; 
}

template <typename T> T min(T a, T b)
{
	if (a == b)
		return b;
	return a < b ? a : b;
}

template <typename T> T max(T a, T b)
{
	if (a == b)
		return b;
	return a > b ? a : b;
}

#endif
