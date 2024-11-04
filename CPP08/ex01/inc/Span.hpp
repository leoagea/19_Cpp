/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:49:27 by lagea             #+#    #+#             */
/*   Updated: 2024/11/04 16:57:28 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SPAN_HPP__
#define __SPAN_HPP__

#include <iostream>
#include <vector>

class Span
{
	public:
		Span(unsigned int N);
		Span(const Span &ref);
		Span &operator=(const Span &ref);
		~Span();
		
		void addNumber(int value);
		
		int shortestSpan() const;
		int longestSpan() const;
		
	private:
		std::vector<int> *_vect;
		unsigned int _n;
		static unsigned int _nbrInVect;
};

class NotEnoughSpace : std::exception
{
	const char *what() const throw()
	{
		return "Not enough space in vector";
	}	
};

class NotEnoughElements : std::exception
{
	const char *what() const throw()
	{
		return "Not enough elements in vector. No span can be found";
	}
};

unsigned int Span::_nbrInVect = 0;

Span::Span(unsigned int N) : _n(N)
{
	_vect = new std::vector<int>[_n];
}

Span::Span(const Span &ref)
{
}

Span &Span::operator=(const Span &ref)
{
	
}

Span::~Span()
{
	delete[] _vect;
}

void Span::addNumber(int value)
{
	if (_nbrInVect >= _n)
		throw (NotEnoughSpace());
	_vect->push_back(value);
	_nbrInVect++;
	_vect>
}

int Span::shortestSpan() const
{
	if (_nbrInVect <= 1)
		throw (NotEnoughElements());
}

int Span::longestSpan() const
{
	if (_nbrInVect <= 1)
		throw (NotEnoughElements());
}

#endif
