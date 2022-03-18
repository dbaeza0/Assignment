// Copyright A.T. Chamillard. All Rights Reserved.

#pragma once

#include "InvestmentAccount.h"

/**
 * A savings account
*/
class SavingsAccount :
    public InvestmentAccount
{
private:
    float InterestRate;

public:
    /**
     * Constructor
     * @param Deposit initial deposit
     * @param InterestRate interest rate
    */
    SavingsAccount(float Deposit, float InterestRate);

    /**
     * Updates the balance by accruing interest
    */
    virtual void UpdateBalance() override;

    /**
     * Provides balance with account type caption
     * @return balance with caption
    */
    virtual std::string GetString() override;
};

