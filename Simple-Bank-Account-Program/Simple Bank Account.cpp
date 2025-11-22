#include"header.h"

using namespace std;

/************************************ -- Getter -- ************************************/
double Account::get_balance() {
	return balance;
}
/************************************ -- Setter -- ************************************/
void Account::set_balance(double new_balance) {
	balance = new_balance;
}

double Account::withdraw(double withdrawl) {
	if (withdrawl < balance) {
		if (withdrawl < 500) {
			cout << "\a\tWithdrawal Amount should be more than 500" << endl;
		}
		else if (withdrawl >= 500) {
			balance = balance - withdrawl;
			return balance;
		}
		else {
			return -1;
		}
	}
	else {
		cout << "Current balance = " << balance << endl;
	}
}

double Account::deposit(double deposited) {
	if (deposited < 500) {
		cout << "\a\tDeposit Amount should be more than 500" << endl;
	}
	else if (deposited >= 500) {
		balance = balance + deposited;
		return balance;
	}
	else {
		return -1;
	}
}