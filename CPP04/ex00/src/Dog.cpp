/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:40:51 by lagea             #+#    #+#             */
/*   Updated: 2024/09/23 17:53:36 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog()
{
    this->_type = "dog";
    std::cout << "Dog Default constructor called." << std::endl;
}

Dog::Dog(const Dog &ref)
{
    *this = ref;
    std::cout << "Dog Copy constructor called." << std::endl;
}

Dog &Dog::operator=(const Dog &ref)
{
    if (this != &ref){
        this->_type = ref._type;
    }
    std::cout << "Dog Copy assignment constructor called." << std::endl;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called." << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Dog is barking." << std::endl;
}
