/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 17:25:07 by lagea             #+#    #+#             */
/*   Updated: 2024/09/12 17:58:16 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();
        
        bool    AddContact(const PhoneBook &P);
        void    SearchContact(const PhoneBook &P);
        void    Exit(const PhoneBook &P);
            
    private:
        Contact arr[8];
};
