/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 15:49:27 by lagea             #+#    #+#             */
/*   Updated: 2024/11/03 19:17:17 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY_HPP__
#define __ARRAY_HPP__

#include <iostream>

template <class T>
class Array
{
	public :
		Array();
		Array(unsigned int len);
		Array(const Array<T> &ref);
		Array<T> &operator=(const Array<T> &ref);
		T &operator[](unsigned int index);
		~Array();

		void	display(std::ostream& out) const;
		unsigned int size() const;
		
	private :
		T *_arr;
		unsigned int _size;
};

template <class T>
std::ostream&	operator<<(std::ostream &out, Array<T>const &ref);

template <class T>
Array<T>::Array()
{
	_size = 0;		
	_arr = new T[0];
}

template <class T>
Array<T>::Array(unsigned int len)
{
	T *temp = new T();

	_size = len;
	_arr = new T[_size];
	for(unsigned int i=0; i < _size; i++)
		_arr[i] = *temp;
	delete temp;	
}

template <class T>
Array<T>::Array(const Array &ref)
{
	_arr = NULL;
	operator=(ref);
}

template <class T>
Array<T> &Array<T>::operator=(const Array &ref)
{
	if (_arr != NULL)
		delete[] _arr;
	_size = ref._size;
	_arr = new T[_size];
	for (unsigned int i=0; i < _size; i++)
		_arr[i] = ref._arr[i];
	return *this;
}

template <class T>
T &Array<T>::operator[](unsigned int index)
{
	if (index >= _size)
		throw std::exception();
	return _arr[index];
}

template <class T>
Array<T>::~Array()
{
	delete[] _arr;
}

template <class T>
void Array<T>::display(std::ostream& out) const
{
	unsigned int i;
	if (_size == 0)
		return;
	for (i = 0; i < _size - 1; i++)
		out << _arr[i] << " - ";
	if (i == _size - 1)
		out << _arr[i];
}


template <class T>
unsigned int Array<T>::size() const
{
	return _size;
}

template <class T>
std::ostream&	operator<<(std::ostream &out, Array<T>const &ref)
{
	ref.display(out);
	return (out);
}

#endif
