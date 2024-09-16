/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 16:04:33 by lagea             #+#    #+#             */
/*   Updated: 2024/09/16 14:10:05 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc/PhoneBook.hpp"

int resolveOptions(const std::string input)
{
    if (input == "ADD")
        return ADD;
    else if (input == "SEARCH")
        return SEARCH;
    else if (input == "EXIT")
        return EXIT;
    return 0;
}

int main()
{
    PhoneBook phonebook;
    
    std::string input;
    do
    {
        std::cout << "\033[33m\nChoose an option between ADD, SEARCH and EXIT\033[0m" << std::endl;
        if (!std::getline(std::cin, input))
        {
            std::cout << " " << std::endl;
            exit(1);   
        }
        if (!input.empty())
        {
            switch(resolveOptions(input))
            {
                case ADD : 
                    phonebook.addContact();
                    break;
                case SEARCH :
                    phonebook.searchContact();
                    break;
                case EXIT :
                    exit(0);
                default : 
                    std::cout << "Wrong command, try another one" << std::endl;
            }
        }
        else
            std::cout << "Input cannot be empty" << std::endl;
    }while (true);
}
