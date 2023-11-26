#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include <iostream>

int main() {
    Account* check = new Checking_Account{};
    check -> withdraw(20);


    // without virtual 
    delete check;

    return 0;
}
