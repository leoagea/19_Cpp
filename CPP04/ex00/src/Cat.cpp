/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:20:02 by lagea             #+#    #+#             */
/*   Updated: 2024/09/23 17:51:16 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat()
{
    this->_type = "cat";
    std::cout << "Cat Default constructor called." << std::endl;
}

Cat::Cat(const Cat &ref)
{
    *this = ref;
    std::cout << "Cat Copy constructor called." << std::endl;
}

Cat &Cat::operator=(const Cat &ref)
{
    if (this != &ref)
    {
        this->_type = ref._type;
    }
    std::cout << "Cat Copy assignment constructor called." << std::endl;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called." << std::endl;
}

void Cat::makeSound() const
{
    std::cout << "Cat is meowing." << std::endl;
}
