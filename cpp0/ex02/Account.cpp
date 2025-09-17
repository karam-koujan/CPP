/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 10:04:51 by kkoujan           #+#    #+#             */
/*   Updated: 2025/09/17 12:01:30 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>


int Account::_nbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;


void Account::displayAccountsInfos(void)
{
    if (getNbAccounts() == 0)
        return ;
    _displayTimestamp();
    std::cout << " accounts:" << _nbAccounts << ";total:"<< _totalAmount << ";deposits:"<< _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
}

int Account::getNbAccounts(void)
{
    return _nbAccounts;
}

int Account::getTotalAmount(void)
{
    return _totalAmount;
}

int Account::getNbDeposits(void)
{
    return _totalNbDeposits;
}

int Account::getNbWithdrawals(void)
{
    return _totalNbWithdrawals;
}

void Account::_displayTimestamp(void)
{
    time_t t = std::time(NULL);
    struct tm *ltm = std::localtime(&t);

    std::cout << "["
              << (1900 + ltm->tm_year)
              << std::setw(2) << std::setfill('0') << (ltm->tm_mon + 1)
              << std::setw(2) << std::setfill('0') << ltm->tm_mday
              << "_"
              << std::setw(2) << std::setfill('0') << ltm->tm_hour
              << std::setw(2) << std::setfill('0') << ltm->tm_min
              << std::setw(2) << std::setfill('0') << ltm->tm_sec
              << "]";
}

void Account::makeDeposit(int deposit)
{
    int p_amount = _amount;
    _nbDeposits++;
    _totalNbDeposits++;
    _amount+=deposit;
    _totalAmount+=deposit;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:"<< deposit << ";amount:"<< _amount << ";nb_deposits:" << _nbDeposits << std::endl;  
}

bool Account::makeWithdrawal(int withdrawal)
{
    bool refused = false;
    int  p_amount = _amount;
    if (withdrawal > _amount)
        refused = true;
    if (refused)
    {
        _displayTimestamp();
        std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:refused" << std::endl;
        return !refused;
    }
    else
    {
        _totalNbWithdrawals++;
        _nbWithdrawals++;
        _totalAmount-= withdrawal;
        _amount-= withdrawal;
        _displayTimestamp();
        std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";withdrawal:"<< withdrawal << ";amount:"<< _amount << ";nb_withdrawals:" << _nbWithdrawals << std::endl;  
        return !refused;
    }
}

int Account::checkAmount(void) const
{
    return _amount;   
}

void Account::displayStatus(void) const
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:"<< _amount << ";deposits:"<< _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
    _nbAccounts++;
    _totalAmount+= initial_deposit;
    _accountIndex = _nbAccounts - 1;
    _amount = initial_deposit;
    _nbDeposits = 0;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:"<< _amount << ";created" << std::endl; 
}

Account::~Account(void)
{
    _displayTimestamp();
    std::cout << " index:" << _accountIndex << ";amount:"<< _amount << ";closed" << std::endl;
}