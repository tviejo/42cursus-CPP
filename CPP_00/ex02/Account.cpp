/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/13 13:40:16 by tviejo            #+#    #+#             */
/*   Updated: 2024/08/14 12:27:16 by tviejo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "Account.hpp"
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( void )
{
}
int Account::getNbAccounts( void )
{
    return _nbAccounts;
}

int Account::getTotalAmount( void )
{
    return _totalAmount;
}

int Account::getNbDeposits( void )
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals( void )
{
    return _totalNbWithdrawals;
}
Account::Account(int initial_deposit)
{
    this->_accountIndex = this->_nbAccounts++;
    this->_amount = initial_deposit;
    Account::_totalAmount += initial_deposit;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << initial_deposit;
    std::cout << ";created" << std::endl;
}

Account::~Account()
{
    Account::_nbAccounts--;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";closed" << std::endl;
}

void Account::displayAccountsInfos( void )
{
    Account::_displayTimestamp();
    std::cout << "accounts:" << Account::getNbAccounts();
    std::cout << ";total:" << Account::getTotalAmount();
    std::cout << ";deposits:" << Account::getNbDeposits();
    std::cout << ";withdrawals:" << Account::getNbWithdrawals();
    std::cout << std::endl;
}

void Account::makeDeposit(int deposit)
{
    this->_nbDeposits++;
    Account::_totalAmount += deposit;
    Account::_totalNbDeposits++;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount;
    this->_amount += deposit;
    std::cout << ";deposit:" << deposit;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";nb_deposit:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
    if (withdrawal > this->_amount)
    {
        Account::_displayTimestamp();
        std::cout << "index:" << this->_accountIndex;
        std::cout << ";p_amount:" << this->_amount;
        std::cout << ";withdrawal:refused" << std::endl;
        return false;
    }
    this->_nbWithdrawals++;
    Account::_totalAmount -= withdrawal;
    Account::_totalNbWithdrawals++;
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";p_amount:" << this->_amount;
    this->_amount -= withdrawal;
    std::cout << ";withdrawal:" << withdrawal;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
    return true;
}

int Account::checkAmount( void ) const
{
    return this->_totalAmount;
}

void Account::displayStatus( void ) const
{
    Account::_displayTimestamp();
    std::cout << "index:" << this->_accountIndex;
    std::cout << ";amount:" << this->_amount;
    std::cout << ";deposits:" << this->_nbDeposits;
    std::cout << ";withdrawals:" << this->_nbWithdrawals;
    std::cout << std::endl;
}

void Account::_displayTimestamp( void )
{
    time_t timestamp = time(NULL);
    struct tm *time = localtime(&timestamp);

    std::cout << "[" << time->tm_year + 1900;
    std::cout << std::setw(2) << std::setfill('0') << time->tm_mon + 1;
    std::cout << std::setw(2) << std::setfill('0') << time->tm_mday;
    std::cout << "_";
    std::cout << std::setw(2) << std::setfill('0')<< time->tm_hour;
    std::cout << std::setw(2) << std::setfill('0')<< time->tm_min;
    std::cout << std::setw(2) << std::setfill('0')<< time->tm_sec;
    std::cout << "] ";
}
    