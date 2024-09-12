/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024const string  getName()const;/09/12 17:26:37 by lagea             #+#    #+#             */
/*   Updated: 2024/09/12 18:01:30 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook()
{   
}

PhoneBook::~PhoneBook()
{   
}

bool PhoneBook::getInput(const string prompt, string &input)
{
    std::cout << prompt;
    if (std::getline(std::cin, input))
    {
        if (input.empty())
        {
            std::cout << "Empty input : try again" << std::endl;
            return false;
        }
        return true;
    }
    else
    {
        if (cin.eof())
        {
            this->~PhoneBook();
            exit(0);
        }
        std::cin.clear();
        return false;
    }
}
void PhoneBook::addContact()
{
    Contact contact;
    string input;

    while(!getInput("First Name : ", input));
    contact.setName(input);
    while(!getInput("Last Name : ", input));
    contact.setLastName(input);
    while(!getInput("NickName : ", input));
    contact.setNickName(input);
    while(!getInput("Phone Number : ", input));
    contact.setPhoneNumber(input);
    while(!getInput("Darkest Secret : ", input));
    contact.setDarkestSecret(input);

    this->insertContact(contact);
    std::cout << "Contact successfully added" << std::endl;
}

void PhoneBook::insertContact(const Contact &contact)
{
    
}

void PhoneBook::searchContact()
{

}

void PhoneBook::displayContact(int index)
{

}

void PhoneBook::displayContacts()
{

}