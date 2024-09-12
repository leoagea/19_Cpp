/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:25:07 by lagea             #+#    #+#             */
/*   Updated: 2024/09/13 00:14:09 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PHONEBOOK_HPP__
#define __PHONEBOOK_HPP__

#include "Contact.hpp"
#include <iostream>

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        
        bool    getInput(const string prompt, string &input);
        void    addContact();
        void    insertContact(const Contact &contact);
        void    searchContact();
        void    displayContact(int index);
        void    displayContacts();
            
    private:
        int     _contactCount;
        int     _contactIndex;
        Contact _contacts[8];
        
};

#endif