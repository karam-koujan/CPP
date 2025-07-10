/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkoujan <kkoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 10:04:51 by kkoujan           #+#    #+#             */
/*   Updated: 2025/07/10 11:39:24 by kkoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>
void Account::displayAccountsInfos(void)
{
    if (getNbAccounts() == 0)
        return ;
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

void Account::displayAccountsInfos(void)
{
    bool created = false;
    std::time
    if (_accountIndex + 1 == getNbAccounts())
        created = true;
    if (created)
        std::cout << "index :" << _accountIndex << ";amount:"<< _amount << ";created";
}