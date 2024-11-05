/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:14:01 by lagea             #+#    #+#             */
/*   Updated: 2024/11/05 14:47:02 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Span.hpp"

Span::Span(unsigned int N) : _maxSize(N)
{
}

Span::Span(const Span &ref) : _vect(ref._vect), _maxSize(ref._maxSize)
{
}

Span &Span::operator=(const Span &ref)
{
	if (this != &ref)
	{
		_vect = ref._vect;
		_maxSize = ref._maxSize;
	}
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(int value)
{
	if (_vect.size() >= _maxSize)
		throw (NotEnoughSpace());
	_vect.push_back(value);
    
}

// template <typename Iterator>
// void Span::addRange(Iterator begin, Iterator end)
// {
//     if (std::distance(begin, end) > static_cast<int>(_maxSize - _vect.size()))
//     {
//         throw NotEnoughSpace();
//     }
//     _vect.insert(_vect.end(), begin, end);
// }
    
int Span::shortestSpan() const
{
	if (_vect.size() <= 1)
		throw (NotEnoughElements());
	
	std::vector<int> sortedVect = _vect;
	std::sort(sortedVect.begin(), sortedVect.end());
    
	int minSpan = std::numeric_limits<int>::max();
	for (size_t i = 1; i < sortedVect.size(); ++i)
	{
		int span = sortedVect[i] - sortedVect[i - 1];
		if (span < minSpan)
			minSpan = span;
	}
	return minSpan;
}

int Span::longestSpan() const
{
	if (_vect.size() <= 1)
		throw (NotEnoughElements());
	
	int max = *std::max_element(_vect.begin(), _vect.end());
	int min = *std::min_element(_vect.begin(), _vect.end());

	return max - min;
}
