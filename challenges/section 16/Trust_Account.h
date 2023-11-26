#ifndef TRUST_ACCOUNT_H
#define TRUST_ACCOUNT_H

#include "Savings_Account.h"
#include <iostream>

class Trust_Account: public Savings_Account{
    double interest_rate;
    int remain_times = 3;
public:
    Trust_Account(string name = "Unnamed Savings Account", double balance = 0.0, double interest_rate=0.0);
    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;
};


#endif
