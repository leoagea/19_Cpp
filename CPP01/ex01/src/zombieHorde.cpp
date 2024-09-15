/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 02:06:22 by lagea             #+#    #+#             */
/*   Updated: 2024/09/15 02:32:49 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *zombieArr = new Zombie[N];
    
    if (N <= 0)
        return nullptr;
    for(int i = 0; i < N; i++)
        zombieArr[i].setName(name);
    return zombieArr;
}