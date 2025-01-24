/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 08:13:08 by gozon             #+#    #+#             */
/*   Updated: 2025/01/24 08:54:19 by gozon            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <ctime>
#include <iostream>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void    Account::_displayTimestamp(void) {
    std::time_t timestamp;
    std::tm     *date;

    std::time(&timestamp);
    date = std::gmtime(&timestamp);

    std::cout << std::setfill('0') << "[" << date->tm_year + 1900
              << std::setw(2) << date->tm_mon + 1
              << std::setw(2) << date->tm_mday
              << std::setw(2) << date->tm_hour + 1
              << std::setw(2) << date->tm_min
              << std::setw(2) << date->tm_sec << "]";
}

Account::Account(int initial_deposit) : _amount(initial_deposit),
    _accountIndex(Account::_nbAccounts), _nbDeposits(0), _nbWithdrawals(0) {
    this->_accountIndex = this->_nbAccounts;
    Account::_nbAccounts += 1;
}
