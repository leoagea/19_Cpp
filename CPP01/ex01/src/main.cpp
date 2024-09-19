/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 01:18:04 by lagea             #+#    #+#             */
/*   Updated: 2024/09/19 15:34:26 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Zombie.hpp"
#include <sstream>
#include <string>
#include <stdexcept>

int stringToInt(const std::string& str) {
    std::stringstream ss(str);
    int num;
    ss >> num;

    // Check if extraction was successful and if there are leftover characters
    if (ss.fail() || !ss.eof() || num > INT_MAX || num < INT_MIN) {
        throw std::invalid_argument("Invalid argument: cannot convert string to integer.");
    }

    return num;
}

int main()
{
    int num;
    std::string nbr;
    std::string name;
    
    std::cout << "\033[31mEnter the number of zombies in the horde : \n\033[0m";
    if (!std::getline(std::cin, nbr))
    {
        std::cout << " " << std::endl;
        exit(0);   
    }
    if (!nbr.empty())
    {
        try 
        {
            num = stringToInt(nbr.c_str());
            if (num < 0){
                std::cout << "Invalig argument: cannot be a negative integer." << std::endl;
                return 0;
            }
        }
        catch (const std::invalid_argument& e) 
        {
            std::cout << "Invalid argument: cannot convert string to integer." << std::endl;
            return 0;
        }
        std::cout << "\033[31mEnter the name of zombies in the horde : \n\033[0m";
        if (!std::getline(std::cin, name))
        {
            std::cout << " " << std::endl;
            return 0;   
        }
        if (!name.empty())
        {
            Zombie *horde = zombieHorde(num, name);
            if (horde == nullptr){
                std::cout << "Invalid argument: cannot allocate 0 zombies" << std::endl;
                return 0;
            }
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

	return 0;
}

