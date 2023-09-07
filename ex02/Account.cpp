/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: math42 <math42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 19:36:30 by math42            #+#    #+#             */
/*   Updated: 2023/09/04 17:35:37 by math42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int	Account::getNbAccounts( void )
{
	return (_nbAccounts);
}
int	Account::getTotalAmount( void )
{
	return (_totalAmount);
}
int	Account::getNbDeposits( void )
{
	return(_totalNbDeposits);
}
int	Account::getNbWithdrawals( void )
{
	return (_totalNbWithdrawals);
}
void	Account::displayAccountsInfos( void )
{
	std::cout << _nbAccounts << _totalAmount << _totalNbDeposits << _totalNbWithdrawals;
}

void	Account::makeDeposit( int deposit )
{
	_totalNbDeposits++;
	_totalAmount += deposit;
}
bool	Account::makeWithdrawal( int withdrawal )
{
	if (_totalAmount > withdrawal)
	{
		_totalNbWithdrawals++;
		_totalAmount-= withdrawal;
		return (0);
	}
	return (1);
}

int		Account::checkAmount( void ) const
{
	std::cout << "check ammount";
	return (getTotalAmount());
}

void	Account::displayStatus( void ) const
{
	displayAccountsInfos();
}