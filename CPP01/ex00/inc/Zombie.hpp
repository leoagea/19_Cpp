/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 00:53:21 by lagea             #+#    #+#             */
/*   Updated: 2024/09/15 01:18:49 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ZOMBIE__HPP__
#define __ZOMBIE__HPP__

#include <string>
#include <iostream>

class Zombie
{
    public:
    
        Zombie(const std::string name);
        ~Zombie();
        
        void    announce(void);
        
    private:
        std::string _name;
};

Zombie* newZombie( std::string name );
void    randomChump( std::string name );

#endif