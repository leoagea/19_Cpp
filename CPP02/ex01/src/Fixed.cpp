/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:55:56 by lagea             #+#    #+#             */
/*   Updated: 2024/09/17 21:45:45 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Fixed.hpp"

Fixed::Fixed() : _fixedPointNumber(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int d)
{
    std::cout << "Int constructor called" << std::endl;
    this->_fixedPointNumber = d << _fractionalBits;
}

Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;   
    this->_fixedPointNumber = roundf(f * (1 << _fractionalBits));
}

Fixed::Fixed(const Fixed &t)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = t;    
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
    return static_cast<float>(_fixedPointNumber) / (1 << _fractionalBits);
}

int Fixed::toInt() const
{
    return _fixedPointNumber >> _fractionalBits;
}

std::ostream &operator<<(std::ostream &out,const Fixed &t)
{
    return (out << t.toFloat());
}
