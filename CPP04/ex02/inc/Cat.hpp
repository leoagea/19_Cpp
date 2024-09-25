/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:16:29 by lagea             #+#    #+#             */
/*   Updated: 2024/09/24 16:43:30 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __CAT_HPP__
#define __CAT_HPP__

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    public:
    
        Cat();
        Cat(const Cat &ref);
        Cat &operator=(const Cat &ref);
        ~Cat();

        void makeSound(void) const;
        Brain *getBrain(void) const;
        
    private:

        Brain *_brain;
};

#endif
