#include"header.h"

using namespace std;

int main() {
	Account acc1;
	int opt = 0;
	acc1.set_balance(50000.75);
	cout << "Your current balance = " << acc1.get_balance() << endl;
	do {
		cout << "1 . Withdraw" << endl;
		cout << "2 . Deposit" << endl;
		cout << "3 . Exit" << endl;

		cout << "What do you want = " << endl;
		cin >> opt;

		if (opt == 1) {
			float amount = 0.0;
			cout << "How much you want to withdraw = " << endl;
			cin >> amount;
			float result = acc1.withdraw(amount);
			if (result == -1) {
				cout << "\a\tInvalid Input !!!" << endl;
			}
			else {
				cout << "Your new balance = " << result << endl;
			}
		}
		else if (opt == 2) {
			float amount = 0.0;
			cout << "How much you want to deposit = " << endl;
			cin >> amount;
			float result = acc1.deposit(amount);
			if (result == -1) {
				cout << "\a\tInvalid Input !!!" << endl;
			}
			else {
				cout << "Your new balance = " << result << endl;
			}
		}
		else if (opt == 3) {
			return 0;
		}
		else {
			cout << "\a\tInvalid Input !!!" << endl;
		}
	} while (opt != 3);
	return 0;
}