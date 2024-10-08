/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 19:55:56 by lagea             #+#    #+#             */
/*   Updated: 2024/09/19 15:25:41 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Replace.hpp"

Replace::Replace(const std::string filePath, const std::string s1, const std::string s2) : _filePath(filePath), _s1(s1), _s2(s2)
{
}

Replace::~Replace()
{
}

void Replace::read()
{
    std::fstream file(this->_filePath);

    if(!file.is_open())
    {
        std::cerr << "Error: Cannot open file: " << this->_filePath << std::endl;
        exit(1); 
    }
    file.seekg(0, file.end);
    if (file.tellg() == 0)
    {
        std::cerr << "Error: File is empty" << std::endl;
        exit(1); 
    }
    file.seekg(0, file.beg);
    std::stringstream buffer;
    buffer << file.rdbuf();
    this->_newContent = buffer.str();
    file.close();
}

void Replace::replace()
{
    if (_s1.empty()) 
    {
        std::cerr << "Error: s1 is empty" << std::endl;
        exit(1); 
    }

    std::string result;
    size_t pos = 0;
    size_t prev = 0;

    while ((pos = _newContent.find(_s1, prev)) != std::string::npos) {
        result.append(_newContent, prev, pos - prev);
        result += _s2;
        prev = pos + _s1.length();
    }

    result.append(_newContent, prev, std::string::npos);
    _newContent = result;
}

void Replace::writeToFile() 
{
    std::ofstream outfile(_filePath + ".replace");
    if (outfile.is_open()) 
    {
        outfile << _newContent;
        outfile.close();
    } 
    else 
    {
        std::cerr << "Failed to write to file: " << _filePath << ".replace" << std::endl;
        exit(1); 
    }
}
