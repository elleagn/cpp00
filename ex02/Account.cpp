/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gozon <gozon@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 08:13:08 by gozon             #+#    #+#             */
/*   Updated: 2025/01/24 09:49:13 by gozon            ###   ########.fr       */
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
              << std::setw(2) << date->tm_mday << "_"
              << std::setw(2) << date->tm_hour + 1
              << std::setw(2) << date->tm_min
              << std::setw(2) << date->tm_sec << "]";

}

int Account::getNbAccounts(void) {
    return (Account::_nbAccounts);
}

int Account::getTotalAmount(void) {
    return (Account::_totalAmount);
}

int Account::getNbDeposits(void) {
    return (Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void) {
    return (Account::_totalNbWithdrawals);
}

void    Account::displayAccountsInfos(void) {

    _displayTimestamp();
    std::cout << " accounts:" << Account::_nbAccounts
              << ";total:" << Account::_totalAmount
              << ";deposits:" << Account::_totalNbDeposits
              << ";withdrawals" << Account::_totalNbWithdrawals << std::endl;

}

Account::Account(int initial_deposit) : _accountIndex(Account::_nbAccounts),
    _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0) {

    Account::_nbAccounts += 1;
    Account::_displayTimestamp();
    std::cout << " index:" << this->_accountIndex
              << ";amount:" << initial_deposit
              << ";created" << std::endl;

}

Account::~Account() {

    _displayTimestamp();
    std::cout << " " << "index:" << this->_accountIndex
              << ";amount:" << this->_amount << ";closed" << std::endl;

}

void    Account::makeDeposit(int deposit) {

    Account::_displayTimestamp();
    std::cout << " index" << this->_accountIndex
              << ";p_amount:" << this->_amount << ";";

    this->_amount += deposit;
    this->_nbDeposits += 1;
    Account::_totalNbDeposits += 1;
    Account::_totalAmount += deposit;

    std::cout << "deposit:" << deposit
              << ";amount:" << this->_amount
              << ";nb_deposits" << this->_nbDeposits << std::endl;

}

bool    Account::makeWithdrawal(int withdrawal) {

    

}
