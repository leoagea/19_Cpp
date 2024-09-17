/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:55:01 by lagea             #+#    #+#             */
/*   Updated: 2024/09/17 21:26:17 by lagea            ###   ########.fr       */
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
        
    private:
        int _fixedPointNumber;
        static const int _fractionalBits = 8;
    
};


#endif
