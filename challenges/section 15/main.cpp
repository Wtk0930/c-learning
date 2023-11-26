/*
 * Section 15 Challenge
 * ====================
 * You are provided with a simple Account class hierarchy that contains
 * Account - Base class
 * Saving Account - Derived class
 *
 * An Account has a name and a balance.
 * A Savings Account is an Account and adds an interest rate.
 *
 * I have also provided some Account helper functions in Account_Util.h and Account_Util.cpp
 * that made it easy to display, deposit to, and withdraw from a vector of Accounts and Savings Accounts.
 *
 * Please refer to the source code provided and the video explanation of this challenge for more details.
 *
 * Your challenge is the following:
 *
 * 1. Add a Checking account class to the Account hierarchy
 *    A Checking account has a name and a balance and has a fee of $1.50 per withdrawal transaction.
 *    Every withdrawal transaction will be assessed this flat fee.
 *
 * 2. Add a Trust account class to the Account hierarchy
 *    A Trust account has a name, a balance, and an interest rate
 *    The Trust account deposit works just like a savings account deposit.
 *    However, any deposits of $5000.00 or more will recieve a $50.00 bonus deposited to the account.
 *
 *    The Trust account withdrawal should only allow 3 withdrawals per year and each of these must be less than 20% of the account balance.
 *    You don't have to keep track of calendar time for this application, just make sure the 4th withdrawal fails :)
 *
 *    Hints:
 *       Reuse existing functionality!!
 *       Think about what the Base class will be for the new classes.
 *       Add helper functions to Account_Util.h and Account_Util.cpp if you wish to work with your new classes.
 *       (You don't have to, but it will make your main much easier to use)
 *
 *    Have fun!! You are no longer beginner C++ programmers!
 *
 *    If you want more practice with operator overloading you can overload += and -= for deposit and withdrawal :)
 */
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include <iostream>

int main() {
    // Test Savings Account
    std::cout << "Testing Savings Account:" << std::endl;
    Savings_Account savings_account("Alice", 5000);
    std::cout << savings_account << std::endl; // Display initial state
    savings_account.deposit(1000);
    std::cout << savings_account << std::endl; // Display after deposit
    savings_account.withdraw(200);
    std::cout << savings_account << std::endl; // Display after withdrawal

    // Test Checking Account
    std::cout << "\nTesting Checking Account:" << std::endl;
    Checking_Account checking_account("Bob", 2000);
    std::cout << checking_account << std::endl; // Display initial state
    checking_account.deposit(500);
    std::cout << checking_account << std::endl; // Display after deposit
    checking_account.withdraw(300); // Should deduct the withdrawal fee as well
    std::cout << checking_account << std::endl; // Display after withdrawal with fee

    // Test Trust Account
    std::cout << "\nTesting Trust Account:" << std::endl;
    Trust_Account trust_account("Charlie", 10000, 0.05);
    std::cout << trust_account << std::endl; // Display initial state
    trust_account.deposit(5000);
    std::cout << trust_account << std::endl; // Display after deposit with interest
    for (int i = 0; i < 5; i++) {
        trust_account.withdraw(1000); // Test withdrawal limits
    }
    std::cout << trust_account << std::endl; // Display after withdrawals

    return 0;
}
