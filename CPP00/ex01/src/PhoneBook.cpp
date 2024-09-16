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

void PhoneBook::clearTerminal()
{
    #if defined _WIN32
        system("cls");
    #elif defined (__LINUX__) || defined(__gnu_linux__) || defined(__linux__)
        system("clear");
    #elif defined (__APPLE__)
        system("clear");
    #endif
}

bool PhoneBook::parseInput(const std::string prompt, std::string &input)
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
        if (std::cin.eof())
        {
            this->~PhoneBook();
            exit(0);
        }
        std::cin.clear();
        return false;
    }
}

bool PhoneBook::parsePhoneNumber(const std::string prompt, std::string &input)
{
    int i;

    std::cout << prompt;
    if (std::getline(std::cin, input))
    {
        if (input.empty())
        {
            std::cout << "Empty input : try again" << std::endl;
            return false;
        }
        i = -1;
        while(input.c_str()[++i])
        {
            if (!std::isdigit((int) input.c_str()[i])) 
            {
                std::cerr << "Enter a numeric number instead" << std::endl;
                return false;
            }
        }
        return true;
    }
    else
    {
        if (std::cin.eof())
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
    std::string input;

    while(!parseInput("First Name : ", input));
    contact.setName(input);
    while(!parseInput("Last Name : ", input));
    contact.setLastName(input);
    while(!parseInput("NickName : ", input));
    contact.setNickName(input);
    while(!parsePhoneNumber("Phone Number : ", input));
    contact.setPhoneNumber(input);
    while(!parseInput("Darkest Secret : ", input));
    contact.setDarkestSecret(input);

    this->insertContact(contact);
    this->clearTerminal();
    std::cout << "Contact successfully added" << std::endl;
}

void PhoneBook::insertContact(const Contact &contact)
{
    if (this->_contactIndex == 8)
        this->_contactIndex = 0;
    this->_contacts[this->_contactIndex] = contact;
    this->_contactIndex++;
    if (this->_contactCount < 8)
        this->_contactCount++;
}

void PhoneBook::searchContact()
{
    int     i;
    int     index;
    std::string  input;

    if (this->_contactCount == 0)
    {
        std::cout << "Phone book is empty" << std::endl;
        return ;
    }
    else
        this->displayContacts();
    parseNbr :
    std::cout << "\nContact Index : ";
    if (!std::getline(std::cin, input))
    {
        std::cout << " " << std::endl;
        exit(1);
    }
    if (!input.empty())
    { 
        index = std::atoi(input.c_str());
        i = -1;
        while(input.c_str()[++i])
        {
            if (!std::isdigit((int) input.c_str()[i])) 
            {
                std::cerr << "Enter a numeric number instead" << std::endl;
                goto parseNbr;
            }
        }
        if (index < 0 || index >= this->_contactCount)
            std::cout << "Contact not found" << std::endl;
    }
    else
        std::cout << "Input cannot be empty" << std::endl;
    this->displayContact(index);
} 

void PhoneBook::displayContact(int index)
{
    Contact contact;

    contact = this->_contacts[index];
    std::cout 
        << "\n"
        << "First Name : " << contact.getName() << "\n"
        << "Last Name : " << contact.getLastName() << "\n"
        << "Nickname : " << contact.getNickname() << "\n"
        << "Phone Number : " << contact.getPhoneNumber() << "\n"
        << "Darkest secret : " << contact.getDarkestSecret() << "\n"
        << std::endl;
}

void PhoneBook::displayContacts()
{
    std::cout << "\n"
        << std::setw(10) << "Index" << " | "
        << std::setw(10) << "First Name" << " | "
        << std::setw(10) << "Last Name" << " | "
        << std::setw(10) << "Nickname" << std::endl;

    for (int i = 0; i < this->_contactCount; i++)
    {
        std::cout << std::setw(10) << i << " | "
            << std::setw(10) << formatString(this->_contacts[i].getName()) << " | "
            << std::setw(10) << formatString(this->_contacts[i].getLastName()) << " | "
            << std::setw(10) << formatString(this->_contacts[i].getNickname()) << std::endl;
    }
}

const std::string PhoneBook::formatString(std::string string)
{
    if (string.size() > 10)
        return string.substr(0, 9) + ".";
    else
        return string;
}
