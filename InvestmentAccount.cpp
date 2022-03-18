// Copyright A.T. Chamillard. All Rights Reserved.

#include "InvestmentAccount.h"

/**
 * Constructor
 * @param Deposit initial deposit
*/
InvestmentAccount::InvestmentAccount(float Deposit)
{
	Balance = Deposit;
}

/**
 * Gets the balance in the account
 * @return balance
*/
float InvestmentAccount::GetBalance()
{
	return Balance;
}

/**
 * Adds money to the account
 * @param Amount amount to add
*/
void InvestmentAccount::AddMoney(float Amount)
{
    // validate and update balance
    if (Amount >= 0)
    {
        Balance += Amount;
    }
    else
    {
        std::cout << "You can't add a negative amount!\n";
    }
}

/**
 * Sets the balance in the account to the
 * given amount
 * @param Amount amount
*/
void InvestmentAccount::SetBalance(float Amount)
{
    // validate and set balance
    if (Amount >= 0)
    {
        Balance = Amount;
    }
    else
    {
        std::cout << "You can't set a negative balance!\n";
    }
}