/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:13:16 by lagea             #+#    #+#             */
/*   Updated: 2024/11/05 18:28:14 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/MutantStack.hpp"
#include <iterator>

template <typename T> MutantStack<T>::MutantStack() : std::stack<T>()
{
}

template <typename T> MutantStack<T>::MutantStack(const MutantStack &ref) : std::stack<T>(ref)
{
}

template <typename T> MutantStack<T> &MutantStack<T>::operator=(const MutantStack &ref)
{
    if (this != &ref)
        std::stack<T>::operator=(ref);
    return *this;
}

template <typename T> MutantStack<T>::~MutantStack()
{
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::begin()
{
    return this->c.begin();
}

template <typename T> typename MutantStack<T>::iterator MutantStack<T>::end()
{
    return this->c.end();
}

template <typename T> typename MutantStack<T>::const_iterator MutantStack<T>::begin() const
{
    return this->c.begin();
}

template <typename T> typename MutantStack<T>::const_iterator MutantStack<T>::end() const
{
    return this->c.begin();
}

template <typename T> typename MutantStack<T>::reverse_iterator MutantStack<T>::rbegin()
{
    return this->c.rbegin();
}

template <typename T> typename MutantStack<T>::reverse_iterator MutantStack<T>::rend()
{
    return this->c.rend();
}

template <typename T> typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rbegin() const
{
    return this->c.rbegin();
}

template <typename T> typename MutantStack<T>::const_reverse_iterator MutantStack<T>::rend() const
{
    return this->c.rend();
}