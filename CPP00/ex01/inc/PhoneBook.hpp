/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:25:07 by lagea             #+#    #+#             */
/*   Updated: 2024/09/15 00:25:24 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__

#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#include <stdlib.h>

enum Options {
    ADD = 1,
    SEARCH,
    EXIT,
};

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        
        void                    clearTerminal();
        bool                    getInput(const std::string prompt, std::string &input);
        void                    addContact();
        void                    insertContact(const Contact &contact);
        void                    searchContact();
        void                    displayContact(int index);
        void                    displayContacts();
        const std::string       formatString(std::string string);
                    
    private:
        int     _contactCount;
        int     _contactIndex;
        Contact _contacts[8];
        
};

#endif