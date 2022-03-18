// Copyright A.T. Chamillard. All Rights Reserved.

#include "SavingsAccount.h"

#include <string>

/**
 * Constructor
 * @param Deposit initial deposit
 * @param InterestRate interest rate
*/
SavingsAccount::SavingsAccount(float Deposit, float InterestRate) :
	InvestmentAccount{ Deposit }
{
	this->InterestRate = InterestRate;
}

/**
 * Updates the balance by accruing interest
*/
void SavingsAccount::UpdateBalance()
{
	// accrue interest
	float CurrentBalance = GetBalance();
	SetBalance(CurrentBalance +
		CurrentBalance * InterestRate);
}

/**
 * Provides balance with account type caption
 * @return balance with caption
*/
std::string SavingsAccount::GetString()
{
	return std::string{ "Savings Account Balance: " } +
		std::to_string(GetBalance());
}
