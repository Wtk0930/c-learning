#include "Checking_Account.h"

Checking_Account::Checking_Account(string name, double balance): Account{name, balance}{
}


bool Checking_Account::withdraw(double amount){
    return Account::withdraw(amount + 1.5);
}


ostream& operator<<(ostream& os, const Checking_Account& account){
    return (os << account.get_balance() << " "  << " " << account.name);
}
