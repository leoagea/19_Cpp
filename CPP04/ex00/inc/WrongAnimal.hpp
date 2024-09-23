/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:56:25 by lagea             #+#    #+#             */
/*   Updated: 2024/09/23 18:13:08 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __WRONGANIMAL_HPP__
#define __WRONGANIMAL_HPP__

#include <string>
#include <iostream>

class WrongAnimal
{
    public:
    
        WrongAnimal();
        WrongAnimal(const WrongAnimal &ref);
        WrongAnimal &operator=(const WrongAnimal &ref);
        ~WrongAnimal();
        
        std::string getType() const;
        void makeSound() const;
        
    protected:
    
        std::string _type;
};

#endif
