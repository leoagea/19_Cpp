/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:55:56 by lagea             #+#    #+#             */
/*   Updated: 2024/09/16 23:17:33 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed() : _fixedPointNumber(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &t)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = t;    
}

Fixed::Fixed(const int d)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
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
    
}

int Fixed::toInt() const
{
    
}
