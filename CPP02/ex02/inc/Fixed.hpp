/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:55:01 by lagea             #+#    #+#             */
/*   Updated: 2024/09/18 17:24:58 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <cmath>

class Fixed
{
    public:
        Fixed();
        Fixed(int d);
        Fixed(float f);
        Fixed(const Fixed &t);
        Fixed &operator=(const Fixed &t);
        ~Fixed();
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;
        
        friend std::ostream &operator<<(std::ostream &out,const Fixed &t);
        bool operator>(const Fixed &t) const;
        bool operator<(const Fixed &t) const;
        bool operator>=(const Fixed &t) const;
        bool operator<=(const Fixed &t) const;
        bool operator==(const Fixed &t) const;
        bool operator!=(const Fixed &t) const;
        Fixed operator+(const Fixed &t) const;
        Fixed operator-(const Fixed &t) const;
        Fixed operator*(const Fixed &t) const;
        Fixed operator/(const Fixed &t) const;
        Fixed &operator++(); //prefix
        Fixed operator++(int); //postifx
        Fixed &operator--();
        Fixed operator--(int);

        
    private:
        int _fixedPointNumber;
        static const int _fractionalBits = 8;
    
};


#endif