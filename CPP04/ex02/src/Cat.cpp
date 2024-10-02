/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:20:02 by lagea             #+#    #+#             */
/*   Updated: 2024/10/02 22:51:45 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Cat.hpp"

Cat::Cat() : _brain(NULL)
{
    this->_type = "cat";
    this->_brain = new Brain();
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
        this->_brain = new Brain(*ref._brain);
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

Brain *Cat::getBrain(void) const
{
    if (this->_brain)
        return this->_brain;
    return (NULL);
}
