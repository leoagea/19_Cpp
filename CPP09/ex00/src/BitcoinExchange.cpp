/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 12:58:02 by lagea             #+#    #+#             */
/*   Updated: 2024/11/11 12:58:13 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(std::string filePath)
{
    parseCSVFile();
    parseInputFile(filePath);
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &ref) : _data(ref._data)
{
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &ref)
{
    if (this != &ref){
        _data = ref._data;
    }
    return *this;    
}

BitcoinExchange::~BitcoinExchange()
{
}

void BitcoinExchange::parseCSVFile()
{
    int index;
    float fvalue;
    std::string line;
    std::string date;
    std::string value;
    
    std::ifstream file("data.csv");
    
    if (!file.is_open()){
        std::cerr << "Error: file data.csv: failed to open" << std::endl;
        exit(1);
    }
    if (!getline(file, line)){
        return ;
    }
    while (getline(file, line))
    {
        if (line.empty())
            continue;
        index = line.find(',');
        date = line.substr(0, index);
        value = line.substr(index + 1, line.size());
        if (!isOnlyDigitOrPoint(value))
            continue;
        fvalue = std::atof(value.c_str());
        _data.insert(std::make_pair(date, fvalue));
    }
    file.close();
}

void BitcoinExchange::parseInputFile(std::string filePath)
{
    int index;
    float fvalue;
    std::string line;
    std::string value;
    std::string date;
    
    std::ifstream file(filePath.c_str());
    
    if (!file.is_open()){
        std::cerr << "Error: file " << filePath << ": failed to open" << std::endl;
        exit(1);
    }
    
    getline(file, line);
    while (getline(file, line))
    {
        if (line.empty())
            continue;
        index = line.find('|');
        if (index == -1){
            std::cerr << "Error: value in " << filePath << ": expected data | value" << std::endl;
            continue; 
        }
        date = line.substr(0, index - 1);
        if (!splitDate(date)){
            std::cerr << "Error: bad date input: " << date << std::endl;
            continue;
        }
        value = line.substr(index + 1, line.size() - index - 1);
        fvalue = std::atof(value.c_str());
        if (fvalue < 0 || fvalue > 1000){
            std::cerr << "Error: bad value input: expected 0 < value < 1000" << std::endl;
            continue;
        }
        getMarketPrice(date, fvalue);
    }
    file.close();
    
}

void BitcoinExchange::getMarketPrice(std::string date, float value)
{
    std::map<std::string, float>::iterator it;
    if (_data.find(date) != _data.end())
    {
        std::cout << date << " => " << value << " = " << value * _data[date] << std::endl;
    }
    else
    {
        if (_data.empty())
            return ;
        it = _data.lower_bound(date);
        if (it == _data.end() || (it->first != date && it != _data.begin()))
				--it;
        std::cout << it->first << " => " << value << " = " << value * it->second << std::endl;
    }
}

bool BitcoinExchange::splitDate(std::string date)
{
    std::stringstream ss(date);
    std::string tmp;
    
    getline(ss, tmp, '-');
    if (!isOnlyDigit(tmp) || tmp.size() != 4)
        return false;
    _year = std::atoi(tmp.c_str());
    getline(ss, tmp, '-');
    if (!isOnlyDigit(tmp) || tmp.size() != 2)
        return false;
    _month = std::atoi(tmp.c_str());
    getline(ss, tmp, '-');
    if (!isOnlyDigit(tmp) || tmp.size() != 2)
        return false;
    _day = std::atoi(tmp.c_str());

    return (isValidDate(_year, _month, _day));
}

bool BitcoinExchange::isOnlyDigit(std::string str)
{
    std::string::iterator it;
    
    for (it = str.begin(); it != str.end(); it++)
        if (!isdigit(*it))
            return false;
    return true;
}

bool BitcoinExchange::isLeap(int year)
{
    return (((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0));
}

bool BitcoinExchange::isValidDate(int year, int month, int day)
{
    if (year < 1800 || year > 9999)
        return false;
    if (month < 1 || month > 12)
        return false;
    if (day < 1 || day > 31)
        return false;

    if (month == 2)
    {
        if (isLeap(year))
            return (day <= 29);
        return (day <= 28);
    }
    return true;
}

bool BitcoinExchange::isOnlyDigitOrPoint(std::string str)
{
    std::string::iterator it;
    
    for (it = str.begin(); it != str.end(); it++)
        if (!isdigit(*it) && *it != '.')
            return false;
    return true;
}
