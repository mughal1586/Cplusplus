#include <iostream>
#include<string>

using namespace std;

class Account {
private:
	double balance;
public:
	/************************************ -- Constructor -- ************************************/
	Account() {
		balance = 0.0;
}
	/************************************ -- Getter -- ************************************/
	double get_balance();
		/************************************ -- Setter -- ************************************/
	void set_balance(double new_balance);

	double withdraw(double withdrawl);
	double deposit(double deposited);
};