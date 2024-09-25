/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 18:08:35 by lagea             #+#    #+#             */
/*   Updated: 2024/09/23 18:14:39 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/WrongCat.hpp"

WrongCat::WrongCat()
{
    this->_type = "wrong animal";
    std::cout << "WrongCat Default constructor called." << std::endl;
}

WrongCat::WrongCat(const WrongCat &ref)
{
    *this = ref;
    std::cout << "WrongCat Copy constructor called." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &ref)
{
    if (this != &ref)
    {
        this->_type = ref._type;
    }
    std::cout << "WrongCat Copy assignment constructor called." << std::endl;
    return *this;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called." << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << "Wrong Cat makes sound." << std::endl;    
}
