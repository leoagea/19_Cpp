/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:55:01 by lagea             #+#    #+#             */
/*   Updated: 2024/09/16 18:27:28 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __HARL_HPP__
#define __HARL_HPP__

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>

class Harl
{
    public:
        Harl();
        ~Harl();
        
        void complain(std::string level);
        
    private:
        void _debug();
        void _info();
        void _warning();
        void _error();

        typedef void (Harl::*fptr)(void);
        fptr _fptr[4];
};

#endif
