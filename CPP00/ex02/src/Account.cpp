/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea <lagea@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:18:23 by lagea             #+#    #+#             */
/*   Updated: 2024/09/18 19:53:39 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account()
{
}

Account::Account(int initial_deposit) :  _accountIndex(0), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
    this->_accountIndex = this->getNbAccounts();
    _nbAccounts++;
    this->_amount = initial_deposit;
    _totalAmount += initial_deposit;
    this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account()
{
    this->_displayTimestamp();
    std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << std::endl;
}

int Account::getNbAccounts()
{
    return _nbAccounts;
}

int Account::getTotalAmount()
{
    return _totalAmount;
}

int Account::getNbDeposits()
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals()
{
    return _totalNbWithdrawals;
}

void Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout 
        << "accounts:" << getNbAccounts() << ";"
        << "total:" << getTotalAmount() << ";"
        << "deposits:" << getNbDeposits() << ";"
        << "withdrawals:" << getNbWithdrawals() << std::endl;
}

void Account::makeDeposit(int deposit)
{
    this->_displayTimestamp();
    std::cout 
        << "index:" << this->_accountIndex << ";"
        << "p_amount:" << this->_amount << ";"
        << "deposit:" << deposit << ";";
    this->_amount += deposit;
    this->_nbDeposits++;
    _totalAmount += deposit;
    _totalNbDeposits++;
    std::cout 
        << "amount:" << this->_amount << ";"
        << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (withdrawal > this->checkAmount())
    {
        this->_displayTimestamp();
        std::cout 
            << "index:" << this->_accountIndex << ";"
            << "p_amount:" << this->_amount << ";"
            << "withdrawal:refused" << std::endl;
        return false;
    }
    else
    {
        this->_displayTimestamp();
        std::cout 
            << "index:" << this->_accountIndex << ";"
            << "p_amount:" << this->_amount << ";"
            << "withdrawal:" << withdrawal << ";";
        this->_amount -= withdrawal;
        this->_nbWithdrawals++;
        _totalNbWithdrawals++;
        _totalAmount -= withdrawal;
        std::cout 
            << "amount:" << this->_amount << ";"
            << "nb_withdrawals:" << this->_nbWithdrawals << std::endl;
        return true;
    }
}

int Account::checkAmount() const
{
    return this->_amount;
}

void Account::displayStatus() const
{
    this->_displayTimestamp();
    std::cout
        << "index:" << this->_accountIndex << ";" 
        << "amount:" << this->_amount << ";" 
        << "deposits:" << this->_nbDeposits << ";" 
        << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp(void)
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	std::cout 
		<< "[" 
		<< 1900 + ltm->tm_year
		<< std::setw(2) << std::setfill('0') << 1 + ltm->tm_mon
		<< std::setw(2) << std::setfill('0') << ltm->tm_mday
		<< "_"
		<< std::setw(2) << std::setfill('0') << ltm->tm_hour
		<< std::setw(2) << std::setfill('0') << ltm->tm_min
		<< std::setw(2) << std::setfill('0') << ltm->tm_sec
		<< "] ";
}


