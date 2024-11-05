/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:49:27 by lagea             #+#    #+#             */
/*   Updated: 2024/11/05 14:47:47 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

class NotEnoughSpace : public std::exception
{
	public :
		const char *what() const throw()
		{
			return "Not enough space in vector";
		}	
};

class NotEnoughElements : public std::exception
{
	public : 
		const char *what() const throw()
		{
			return "Not enough elements in vector. No span can be found";
		}
};

class Span
{
	public:
		Span(unsigned int N);
		Span(const Span &ref);
		Span &operator=(const Span &ref);
		~Span();
		
		void addNumber(int value);
		
		template <typename Iterator>
		void addRange(Iterator begin, Iterator end)
   		{
			if (std::distance(begin, end) > static_cast<int>(_maxSize - _vect.size()))
			{
				throw NotEnoughSpace();
			}
			_vect.insert(_vect.end(), begin, end);
    	}	
		
		int shortestSpan() const;
		int longestSpan() const;
		
	private:
		std::vector<int> _vect;
		unsigned int _maxSize;
};


#endif
