// Copyright A.T. Chamillard. All Rights Reserved.

#include <iostream>

#include "MutualFund.h"
#include "EmployerSponsoredAccount.h"

// Remove the /* and */ as indicated below to make this
// work with the automated grader
// the code is commented out so the project compiles

// test case to run
int TestCaseNumber;

void GetInputValueFromString(std::string Input);
bool WithinOnePenny(float FirstAmount, float SecondAmount);

/**
 * Programming Assignment 1
 * @param argc command-line argument count
 * @param argv command-line arguments
 * @return exit status
 */
int main(int argc, const char * argv[])
{
    // loop while there's more input
    std::string Input;
    std::cin >> Input;
    while (Input[0] != 'q')
    {
        // extract test case number from string
        GetInputValueFromString(Input);

        // remove the /* below
        
        MutualFund MFAccount{ 100 };
        EmployerSponsoredAccount ESAccount{ 100 };

        // execute selected test case
        switch (TestCaseNumber)
        {
        case 1:
             if (WithinOnePenny(MFAccount.GetBalance(), 100))
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        case 2:
            MFAccount.AddMoney(100);
            if (WithinOnePenny(MFAccount.GetBalance(), 199))
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        case 3:
            MFAccount.UpdateBalance();
            if (WithinOnePenny(MFAccount.GetBalance(), 106))
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        case 4:
            if (WithinOnePenny(ESAccount.GetBalance(), 100))
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        case 5:
            ESAccount.AddMoney(100);
                std::cout << ESAccount.GetBalance() <<std::endl;
            if (WithinOnePenny(ESAccount.GetBalance(), 298))
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        case 6:
            ESAccount.UpdateBalance();
            if (WithinOnePenny(ESAccount.GetBalance(), 106))
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        case 7:
            MFAccount.AddMoney(100);
            MFAccount.UpdateBalance();
            if (WithinOnePenny(MFAccount.GetBalance(), 210.94f))
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        case 8:
            MFAccount.UpdateBalance();
            MFAccount.UpdateBalance();
            if (WithinOnePenny(MFAccount.GetBalance(), 112.36f))
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        case 9:
            ESAccount.AddMoney(100);
            ESAccount.UpdateBalance();
            if (WithinOnePenny(ESAccount.GetBalance(), 315.88f))
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        case 10:
            ESAccount.UpdateBalance();
            ESAccount.UpdateBalance();
            if (WithinOnePenny(ESAccount.GetBalance(), 112.36f))
            {
                std::cout << "Passed\n";
            }
            else
            {
                std::cout << "FAILED\n";
            }
            break;
        }

        // remove the */ above

        std::cin >> Input;
    }
    
    return 0;
}

/**
 * Extracts the test case number from the given input string
 * @param Input input string
 */
void GetInputValueFromString(std::string Input)
{
    TestCaseNumber = std::atoi(Input.c_str());
}

/**
 * Tells whether or not the two amounts are within a penny of each other
 * @param FirstAmount first amount
 * @param SecondAmount second amount
 * @return true if they are, false if they aren't
*/
bool WithinOnePenny(float FirstAmount, float SecondAmount)
{
    return std::abs(FirstAmount - SecondAmount) <= 0.01f;
}
