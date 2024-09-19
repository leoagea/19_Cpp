/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/19 16:54:51 by lagea             #+#    #+#             */
/*   Updated: 2024/09/19 17:39:25 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Point.hpp"

Point::Point() : _x(0) , _y(0)
{
}

Point::Point(const float x, const float y) : _x(x) , _y(y)
{
}

Point::Point(const Point &other)
{
    *this = other;
}

Point &Point::operator=(const Point &other)
{
    (void) other;
    return *this;
}

Point::~Point()
{
}

const Fixed &Point::getX() const
{
    return this->_x; 
}

const Fixed &Point::getY() const
{
    return this->_y; 
}
