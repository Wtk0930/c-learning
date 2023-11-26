#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

#include "Account.h"
#include <iostream>

class Checking_Account: public Account{
    friend ostream& operator<<(ostream& os, const Checking_Account& account);
public:
    Checking_Account(string name = "Unnamed Savings Account", double balance = 0.0);
    virtual bool withdraw(double amount);
    ~Checking_Account();
};
#endif
