/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 00:53:21 by lagea             #+#    #+#             */
/*   Updated: 2024/09/16 18:21:04 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE__HPP__
#define __ZOMBIE__HPP__

#include <string>
#include <iostream>

class Zombie
{
    public:
    
        Zombie();
        Zombie(const std::string name);
        ~Zombie();
        
        void    announce(void);
        void    setName (const std::string name);
        
    private:
        
        std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
