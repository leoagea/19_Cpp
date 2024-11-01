/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:21:54 by lagea             #+#    #+#             */
/*   Updated: 2024/10/31 17:02:00 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __SHRUBBERYCREATIONFORM_HPP__
#define __SHRUBBERYCREATIONFORM_HPP__

#include "AForm.hpp"
#include <iostream>
#include <fstream>
#include <cstring>

#define TREE "                  &&& &&  & && \n\
              && &  &|& ()|  @, && \n\
              &  (& &||&   _) &_  \n\
           &() &  &|()| &   '% & \n\
          &&  &  &| & () & &|()| \n\
          ()&__%& & | &| & __%_& \n\
         &&   && & &| &|   &  && \n\
                  ||| ||| \n\
                  ||| ||| \n\
                  ||| ||| \n\
              , -=-~  .-^- _ \n "


class ShrubberyCreationForm : public AForm
{
    public:
    
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(const ShrubberyCreationForm &ref);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &ref);
        ~ShrubberyCreationForm();
        
        virtual void execute(Bureaucrat const &executor) const;
        
    private:
        
};


#endif
