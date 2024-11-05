/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:49:27 by lagea             #+#    #+#             */
/*   Updated: 2024/11/03 23:51:33 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __EASYFIND_HPP__
#define __EASYFIND_HPP__

#include <algorithm>

class NotFoundException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return "Parameter not found!";
		}
};


template <typename T> typename T::iterator easyfind(T &container, int to_find)
{
	typename T::iterator found;
	
	found = std::find(container.begin(), container.end(), to_find);
	if (found == container.end())
		throw NotFoundException();
	return found;
}

#endif
