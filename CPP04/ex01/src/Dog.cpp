/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:40:51 by lagea             #+#    #+#             */
/*   Updated: 2024/09/24 17:04:32 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Dog.hpp"

Dog::Dog() : _brain(nullptr)
{
    std::cout << "Dog Default constructor called." << std::endl;
    this->_type = "dog";
    this->_brain = new Brain();
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

Brain *Dog::getBrain(void) const
{
    return this->_brain;
}
