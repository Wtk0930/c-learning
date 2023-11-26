#include "Trust_Account.h"


Trust_Account::Trust_Account(string name, double balance, double interest_rate)
: Savings_Account{name, balance, interest_rate}
{}

bool Trust_Account::deposit(double amount){
    if(amount >= 5000){
        amount += 50;
    }
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount){
    if(remain_times == 0){
        cout << "times run out" << endl;
        return false;
    }
    remain_times --;
    return Savings_Account::withdraw(amount);
}
