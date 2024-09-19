/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:55:56 by lagea             #+#    #+#             */
/*   Updated: 2024/09/19 17:56:13 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed() : _rawBits(0)
{
}

Fixed::Fixed(const int d)
{
    this->_rawBits = d << _fracBits;
}

Fixed::Fixed(const float f)
{
    this->_rawBits = roundf(f * (1 << _fracBits));
}

Fixed::Fixed(const Fixed &t)
{
    *this = t;    
}

Fixed &Fixed::operator=(const Fixed &t)
{
    if(this != &t)
    {
        this->_rawBits = t.getRawBits();
    }
    return *this;
}

Fixed::~Fixed()
{
}

int Fixed::getRawBits( void ) const
{
    return this->_rawBits;
}

void Fixed::setRawBits( int const raw )
{
    this->_rawBits = raw;
}

float Fixed::toFloat() const
{
    return static_cast<float>(_rawBits) / (1 << _fracBits);
}

int Fixed::toInt() const
{
    return _rawBits >> _fracBits;
}

std::ostream &operator<<(std::ostream &out,const Fixed &t)
{
    return (out << t.toFloat());
}

bool Fixed::operator>(const Fixed &t) const
{
    return this->_rawBits > t._rawBits;    
}

bool Fixed::operator<(const Fixed &t) const
{
    return this->_rawBits < t._rawBits;
}

bool Fixed::operator>=(const Fixed &t) const
{
    return this->_rawBits >= t._rawBits;
}

bool Fixed::operator<=(const Fixed &t) const
{
    return this->_rawBits <= t._rawBits;
}

bool Fixed::operator==(const Fixed &t) const
{
    return this->_rawBits == t._rawBits;
}

bool Fixed::operator!=(const Fixed &t) const
{
    return this->_rawBits != t._rawBits;
}

Fixed Fixed::operator+(const Fixed &t) const
{
    // Fixed result;
    // result._rawBits = this->_rawBits + t._rawBits;
    // return result;
    return (Fixed(this->toFloat() + t.toFloat()));
}

Fixed Fixed::operator-(const Fixed &t) const
{
    // Fixed result;
    // result._rawBits = this->_rawBits - t._rawBits;
    // return result;
    return (Fixed(this->toFloat() - t.toFloat()));
}

Fixed Fixed::operator*(const Fixed &t) const
{
    // Fixed result;
    // result._rawBits = this->_rawBits * t._rawBits;
    // return result;
    return (Fixed(this->toFloat() * t.toFloat()));
}

Fixed Fixed::operator/(const Fixed &t) const
{
    // Fixed result;
    // result._rawBits = this->_rawBits / t._rawBits;
    // return result;
    return (Fixed(this->toFloat() / t.toFloat()));
}

Fixed &Fixed::operator++()
{
    ++this->_rawBits;
    return *this;
}

Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    ++this->_rawBits;
    return temp;    
}

Fixed &Fixed::operator--()
{
    --this->_rawBits;
    return *this;
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    --this->_rawBits;
    return temp;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2)
{
    return (f1._rawBits < f2._rawBits) ? f1 : f2;
}

const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2)
{
    return (f1._rawBits < f2._rawBits) ? f1 : f2;
}

Fixed &Fixed::max(Fixed &f1, Fixed &f2)
{
    return (f1._rawBits > f2._rawBits) ? f1 : f2;
}

const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2)
{
    return (f1._rawBits > f2._rawBits) ? f1 : f2;
}
