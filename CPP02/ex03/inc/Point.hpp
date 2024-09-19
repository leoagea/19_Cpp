/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:50:01 by lagea             #+#    #+#             */
/*   Updated: 2024/09/19 17:36:11 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __POINT_HPP__
#define __POINT_HPP__

#include "Fixed.hpp"

class Point
{
    public:
        Point();
        Point(const float x, const float y);
        Point(const Point &other);
        Point &operator=(const Point &other);
        ~Point();
        
        const Fixed &getX() const;
        const Fixed &getY() const;
        
    private:
        Fixed const _x;
        Fixed const _y;
        
};

#endif
