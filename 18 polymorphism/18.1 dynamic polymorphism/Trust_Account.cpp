#include "Trust_Account.h"


Trust_Account::Trust_Account(string name, double balance, double interest_rate)
: Account{name, balance}, interest_rate{interest_rate}
{}

bool Trust_Account::deposit(double amount){
    if(amount >= 5000){
        amount += 50;
    }
    amount += amount * (interest_rate / 100);
    return Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount){
    if(remain_times == 0){
        cout << "times run out" << endl;
        return false;
    }
    remain_times --;
    return Account::withdraw(amount);
}

ostream& operator<<(ostream& os, const Trust_Account& account){
    return (os << account.get_balance() << " " << account.interest_rate << " " << account.name);
}
