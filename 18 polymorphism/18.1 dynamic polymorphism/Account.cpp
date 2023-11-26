#include "Account.h"

Account::Account(string name, double balance)
	: name{ name }, balance{ balance } {
}

bool Account::deposit(double amount) {
	if (amount < 0) {
		return false;
	}
	else {
		balance += amount;
		return true;
	}
}

bool Account::withdraw(double amount) {
	cout << "Account withdraw" << endl;
	if (balance - amount >= 0) {
		balance -= amount;
		return true;
	}
	else {
		return false;
	}
}

double Account::get_balance() const {
	return balance;
}

Account::~Account(){
	cout << "account deleted" << endl;
}

ostream& operator<<(ostream& os, const Account& account) {
	return os << "[Account: " << account.name << ": " << account.balance << "]";
}
