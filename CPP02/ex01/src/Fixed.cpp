/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:55:56 by lagea             #+#    #+#             */
/*   Updated: 2024/09/17 18:14:52 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

const int Fixed::_fractionalBits = 8;


Fixed::Fixed() : _fixedPointNumber(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &t)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = t;    
}

Fixed::Fixed(const int d) : _fixedPointNumber(d * pow(2, _fractionalBits))
{
    // this->_fixedPointNumber = d << this->_fractionalBits;
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f) : _fixedPointNumber(f * pow(2, _fractionalBits))
{
    // this->_fixedPointNumber = f * (float)(1 << this->_fractionalBits);
    std::cout << "Copy constructor called" << std::endl;   
}

Fixed &Fixed::operator=(const Fixed &t)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if(this != &t)
    {
        this->_fixedPointNumber = t.getRawBits();
    }
    return *this;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointNumber;
}

void Fixed::setRawBits( int const raw )
{
    std::cout << "setRawBits member function called" << std::endl;
    this->_fixedPointNumber = raw;
}

float Fixed::toFloat() const
{
    // return (float)this->_fixedPointNumber / (float)(1 << this->_fractionalBits);
    return _fixedPointNumber * pow(2, -_fractionalBits);
}

int Fixed::toInt() const
{
    // return this->_fixedPointNumber << this->_fractionalBits;
    return _fixedPointNumber * pow(2, -_fractionalBits);
}

std::ostream &operator<<(std::ostream &out,const Fixed &t)
{
    return (out << t.toFloat());
}
