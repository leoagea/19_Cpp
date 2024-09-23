/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:55:01 by lagea             #+#    #+#             */
/*   Updated: 2024/09/23 16:35:48 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ANIMAL_HPP__
#define __ANIMAL_HPP__

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class Animal
{
    public:
        Animal();
        Animal(const Animal &ref);
        Animal &operator=(const Animal &ref);
        virtual ~Animal();
        
        virtual std::string getType(void) const;
        virtual void makeSound(void) const;

    protected:
        std::string _type;
    
};

#endif
