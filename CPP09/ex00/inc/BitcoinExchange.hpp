/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.s19.be>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 12:58:42 by lagea             #+#    #+#             */
/*   Updated: 2024/11/11 12:57:51 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __BITCOINEXCHANGE_HPP__
#define __BITCOINEXCHANGE_HPP__

#include <map>
#include <iostream>
#include <fstream>
#include <cstdlib> //exit
#include <sstream>

class BitcoinExchange
{
    public:
        BitcoinExchange(std::string);
        BitcoinExchange(const BitcoinExchange &ref);
        BitcoinExchange &operator=(const BitcoinExchange &ref);
        ~BitcoinExchange();
    
    private:
        BitcoinExchange(){}
        
        void parseCSVFile(void);
        void parseInputFile(std::string filePath);
        bool splitDate(std::string date);
        bool isOnlyDigit(std::string string);
        bool isLeap(int year);
        bool isValidDate(int year, int month, int day);
        bool isOnlyDigitOrPoint(std::string string);
        void getMarketPrice(std::string date, float value);
        
        int _year;
        int _month;
        int _day;
        std::map <std::string, float> _data;
};

#endif
