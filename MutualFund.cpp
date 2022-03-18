// Copyright A.T. Chamillard. All Rights Reserved.

#include "MutualFund.h"

#include <string>

/**
  * Constructor
  * @param Deposit initial deposit
 */

MutualFund::MutualFund(float Deposit) : InvestmentAccount(Deposit)
{    
}

/**
 * Adds money to the account, deducting a
 * service charge
 * @param Amount amount to add
*/
void MutualFund::AddMoney(float Amount)
{
	// delete code below and replace with your code
    float AmountMinusCharge = Amount * (1 - this->ServiceChargePercent);
    SetBalance(GetBalance() + AmountMinusCharge);
}

/**
 * Updates the balance by adding 6%
*/
void MutualFund::UpdateBalance()
{
	// delete code below and replace with your code
    float BalancePlusGain = GetBalance() * 1.06;
    SetBalance(BalancePlusGain);
}

/**
 * Provides balance with account type caption
 * @return balance with caption
*/
std::string MutualFund::GetString()
{
	return std::string{ "Mutual Fund Balance: " } +
		std::to_string(GetBalance());
}

