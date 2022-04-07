#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int Account::getNbAccounts (void) {
    return (Account::_nbAccounts);
}

int Account::getNbDeposits (void) {
    return (Account::_totalNbDeposits);
}

int Account::getTotalAmount (void) {
    return (Account::_totalAmount);
}

int Account::getNbWithdrawals (void) {
    return (Account::_totalNbWithdrawals);
}

Account::Account(int initial_deposit):
	_amount(initial_deposit),
	_nbDeposits(0),
	_nbWithdrawals(0) {
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account( void ) {
	Account::_displayTimestamp();
	Account::_nbAccounts--;
	Account::_totalAmount -= this->_amount;
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
}

void	Account::makeDeposit(int deposit) {
	Account::_totalAmount += deposit;
	Account::_totalNbDeposits++;
	Account::_displayTimestamp();
	std::cout
		<< "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";deposit:" << deposit
		<< ";amount:" << this->_amount + deposit
		<< ";nb_deposits:" << ++this->_nbDeposits
		<< std::endl;
	this->_amount += deposit;
}

void    Account::displayAccountsInfos( void ) {
	Account::_displayTimestamp();
	std::cout
		<< "accounts:" << Account::_nbAccounts
		<< ";total:" << Account::_totalAmount
		<< ";deposits:" << Account::_totalNbDeposits
		<< ";withdrawals:" << Account::_totalNbWithdrawals
		<< std::endl;
}

void    Account::displayStatus( void ) const {
    _displayTimestamp();
    std::cout
        << "index:" << _accountIndex
        << ";amount:" << _amount
        << ";deposits:" << _nbDeposits
        << ";withdrawals:" << _nbWithdrawals
        << std::endl;
}

void	Account::_displayTimestamp( void ) {
    std::time_t rawtime;
    std::tm* timeinfo;

    std::time(&rawtime);
    timeinfo = std::localtime(&rawtime);
	std::cout.fill('0');
	std::cout << "[";
	std::cout << timeinfo->tm_year + 1900;
	std::cout << std::setw(2) << timeinfo->tm_mon;
	std::cout << std::setw(2) << timeinfo->tm_mday;
	std::cout << "_";
	std::cout << std::setw(2) << timeinfo->tm_hour;
	std::cout << std::setw(2) << timeinfo->tm_min;
	std::cout << std::setw(2) << timeinfo->tm_sec;
	std::cout << "] ";
}

bool	Account::makeWithdrawal( int withdrawal ) {
	Account::_displayTimestamp();
	if (this->_amount >= withdrawal) {
		Account::_totalAmount -= withdrawal;
		Account::_totalNbWithdrawals++;
		std::cout
			<< "index:" << this->_accountIndex
			<< ";p_amount:" << this->_amount
			<< ";withdrawal:" << withdrawal
			<< ";amount:" << this->_amount - withdrawal
			<< ";nb_withdrawals:" << ++this->_nbWithdrawals
			<< std::endl;
		this->_amount -= withdrawal;
		return (true);
	}
	std::cout
		<< "index:" << this->_accountIndex
		<< ";p_amount:" << this->_amount
		<< ";withdrawal:refused" << std::endl;

	return (false);
}
