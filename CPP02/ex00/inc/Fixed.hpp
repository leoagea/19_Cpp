/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:55:01 by lagea             #+#    #+#             */
/*   Updated: 2024/09/19 17:56:13 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class Fixed
{
    public:
        Fixed();
        Fixed(const Fixed &t);
        Fixed &operator=(const Fixed &t);
        ~Fixed();
        
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
    private:
        int _rawBits;
        static const int _fracBits = 8;
    
};

#endif
