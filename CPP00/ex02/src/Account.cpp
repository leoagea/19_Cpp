/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lagea < lagea@student.s19.be >             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 17:18:23 by lagea             #+#    #+#             */
/*   Updated: 2024/09/15 00:33:10 by lagea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Account.hpp"
#include <iostream>

Account::Account()
{
    this->_accountIndex = this->getNbAccounts();
    _nbAccounts++;
}

Account::Account(int initial_deposit)
{
    this->_accountIndex = this->getNbAccounts();
    _nbAccounts++;
    this->_amount = initial_deposit;
    _totalAmount += initial_deposit;
}

Account::~Account()
{
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
        << "accounts:" << _nbAccounts << ";"
        << "total:" << _totalAmount << ";"
        << "deposits:" << _totalNbDeposits << ";"
        << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit(int deposit)
{
    this->_displayTimestamp();
    std::cout 
        << "index:" << this->_accountIndex << ";"
        << "p_amount:" << this->_amount << ";"
        << "deposit:" << deposit;
    this->_amount += deposit;
    this->_nbDeposits++;
    _nbDeposits++;
    _totalAmount += deposit;
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
            << "withdrawal:" << withdrawal;
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
		<< std::setw(2) << std::setfill('0') << ltm->tm_mon
		<< std::setw(2) << std::setfill('0') << ltm->tm_mday
		<< "_"
		<< std::setw(2) << std::setfill('0') << ltm->tm_hour
		<< std::setw(2) << std::setfill('0') << ltm->tm_min
		<< std::setw(2) << std::setfill('0') << ltm->tm_sec
		<< "] ";
}

