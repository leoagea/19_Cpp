/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 14:58:30 by lagea             #+#    #+#             */
/*   Updated: 2024/09/24 16:49:19 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BRAIN_HPP__
#define __BRAIN_HPP__

#include <string>
#include <iostream>
#include <sstream>
#include <iomanip>

#define BRAIN_NBR 100

class Brain
{
    public:
    
        Brain();
        Brain(const Brain &ref);
        Brain &operator=(const Brain &ref);
        ~Brain();
        
        std::string getIdea(unsigned int index) const;
        void setIdea(unsigned int index, std::string idea);
        
    private:

        std::string _ideas[BRAIN_NBR];
};

#endif
