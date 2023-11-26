#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H

#include "Account.h"
#include <iostream>

class Trust_Account: public Account{
    friend ostream& operator<<(ostream& os, const Trust_Account& account);
    double interest_rate;
    int remain_times = 3;
public:
    Trust_Account(string name = "Unnamed Savings Account", double balance = 0.0, double interest_rate=0.0);
    bool withdraw(double amount);
    bool deposit(double amount);
};
#endif
