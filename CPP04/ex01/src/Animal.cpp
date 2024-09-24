/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:55:56 by lagea             #+#    #+#             */
/*   Updated: 2024/09/19 17:55:41 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(const Animal &t)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = t;    
}

Animal &Animal::operator=(const Animal &ref)
{
    std::cout << "Animal Copy assignment operator called" << std::endl;
    if(this != &ref)
    {
        this->_type = ref._type;
    }
    return *this;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

std::string Animal::getType() const
{
    return this->_type;
}

void Animal::makeSound() const
{
    std::cout << "Animal making a sound." << std::endl;
}

Brain *Animal::getBrain() const
{
    return (nullptr);
}
