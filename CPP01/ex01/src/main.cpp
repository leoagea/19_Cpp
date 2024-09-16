/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 01:18:04 by lagea             #+#    #+#             */
/*   Updated: 2024/09/16 14:13:14 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"

int main()
{
    int num;
    std::string nbr;
    std::string name;
    
	do
    {
       std::cout << "\033[31mEnter the number of zombies in the horde : \n\033[0m";
        if (!std::getline(std::cin, nbr))
        {
            std::cout << " " << std::endl;
            exit(1);   
        }
        if (!nbr.empty())
        {
            try 
            {
                num = std::atoi(nbr.c_str());
            }
            catch (const std::invalid_argument& e) 
            {
                std::cout << "Invalid argument: cannot convert string to integer." << std::endl;
                exit(1);
            }
            std::cout << "\033[31mEnter the name of zombies in the horde : \n\033[0m";
            if (!std::getline(std::cin, name))
            {
                std::cout << " " << std::endl;
                exit(1);   
            }
            if (!name.empty())
            {
                Zombie *horde = zombieHorde(num, name);
                std::cout << std::endl;
                for(int i = 0; i < num; i++)
                    horde[i].announce();
                delete []horde;
                std::cout << std::endl;
            }
            else
                std::cout << "Input cannot be empty" << std::endl;
        }
        else
            std::cout << "Input cannot be empty" << std::endl;
    } while (true);

	return 0;
}

