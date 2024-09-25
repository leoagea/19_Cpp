/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 16:39:40 by lagea             #+#    #+#             */
/*   Updated: 2024/09/24 16:44:33 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __DOG_HPP__
#define __DOG_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    public:
    
        Dog();
        Dog(const Dog &ref);
        Dog &operator=(const Dog &ref);
        ~Dog();
        
        void makeSound(void) const;
        Brain *getBrain(void) const;

    private:
    
        Brain *_brain;    
};

#endif
