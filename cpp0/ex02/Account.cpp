/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 10:04:51 by kkoujan           #+#    #+#             */
/*   Updated: 2025/07/11 11:14:57 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>


int Account::getNbAccounts;
int	Account::_totalAmount;
int	Account::_totalNbDeposits;
int	Account::_totalNbWithdrawals;


void Account::displayAccountsInfos(void)
{
    if (getNbAccounts() == 0)
        return ;
    std::cout << " accounts:" << _nbAccounts << ";total:"<< _totalAmount; << ";deposits:"<< _totalNbDeposits << ";withdrawals:" << _totalNbWithdrawals << std::endl;
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
    time_t t = std::time(nullptr);
    struct tm *ltm = std::localtime(&t);
    std::cout << std::put_time(ltm, "%Y%m%d_%H%M%S");
}

void Account::makeDeposit(int deposit)
{
    int p_amount = _amount;
    _nbDeposits++;
    _totalNbDeposits++;
    _amount+=deposit;
    _totalAmount+=deposit;
    std::cout << " index:" << _accountIndex << ";p_amount:" << p_amount << ";deposit:"<< deposit << ";amount:"<< _amount << ";nb_deposits:" << _nbDeposits << std::endl;  
}

void Account::makeWithdrawal(int withdrawal)
{
    _totalNbWithdrawals++;
    _nbWithdrawals+= withdrawal;
}

void Account::checkAmount(void)
{
    
}

void Account::displayStatus(void)
{
    std::cout << " index:" << _accountIndex << ";amount:"<< _amount; << ";deposits:"<< _nbDeposits << ";withdrawals:" << _nbWithdrawals << std::endl;
}

Account::Account(int initial_deposit)
{
    _nbAccounts++;
    _totalAmount+= initial_deposit;
    _totalNbDeposits++;
    _accountIndex = _nbAccounts - 1;
    _amount = initial_deposit;
    _nbDeposits = 1;
    _nbWithdrawals = 0;
    _displayTimestamp();
    std::cout << " index :" << _accountIndex << ";amount:"<< _amount << std::endl; 
}