// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include <iostream>

/**
 * An investment account
*/
class InvestmentAccount
{
private:
	float Balance;

public:
	/**
	 * Constructor
	 * @param Deposit initial deposit
	*/
	InvestmentAccount(float Deposit);

	/**
	 * Gets the balance in the account
	 * @return balance
	*/
	float GetBalance();

	/**
	 * Provides balance with account type caption
	 * @return balance with caption
	*/
	virtual std::string GetString() = 0;

    /**
     * Adds money to the account
     * @param Amount amount to add
    */
    virtual void AddMoney(float Amount);

    /**
     * Updates the balance in the account
    */
    virtual void UpdateBalance() = 0;

protected:
	/**
	 * Sets the balance in the account to the
	 * given amount
	 * @param Amount amount
	*/
	void SetBalance(float Amount);
};

