/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 15:13:57 by lagea             #+#    #+#             */
/*   Updated: 2024/09/24 16:55:55 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain Default constructor called." << std::endl;
    for (int i = 0; i < BRAIN_NBR; i++)
        this->_ideas[i] = "";
}

Brain::Brain(const Brain &ref)
{
    *this = ref;
    std::cout << "Brain Copy constructor called." << std::endl;
}

Brain &Brain::operator=(const Brain &ref)
{
    if (this != &ref)
    {
        for (int i = 0; i < BRAIN_NBR; i++)
            this->_ideas[i] = ref._ideas[i];
    }
    std::cout << "Brain Copy assignment operator called." << std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called." << std::endl;
}

std::string Brain::getIdea(unsigned int index) const
{
    if (index > 100){
        return "getIdea: Index out of range.";
    }
    if (this->_ideas[index].empty()){
        return "...";
    }
    return this->_ideas[index];
}

void Brain::setIdea(unsigned int index, std::string idea)
{
    if (index > 100){
        std::cout << "setIdea: Index out of range" << std::endl;
        return ;
    }
    if (idea.empty()){
        std::cout << "setIdea: Idea cannot be empty." << std::endl;
        return ;
    }
    this->_ideas[index] = idea;
}
