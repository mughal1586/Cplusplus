#include"bankacc.h"

/********************************* -- Constructor -- *********************************/
BankAcc::BankAcc() {
	acc_no = 0;
	holder = "";
	type = "";
	balance = 0;
}
BankAcc::BankAcc(int acc_no, string holder, string type, float balance) {
	this->acc_no = acc_no;
	this->holder = holder;
	this->type = type;
	this->balance = balance;
}
/*********************************** -- Getter -- ***********************************/
int BankAcc::get_acc_no() {
	return acc_no;
}
string BankAcc::get_holder() {
	return holder;
}
string BankAcc::get_type() {
	return type;
}
float BankAcc::get_balance() {
	return balance;
}
/*********************************** -- Setter -- ***********************************/
void BankAcc::set_acc_no(int acc_no) {
	this->acc_no = acc_no;
}
void BankAcc::set_holder(string holder) {
	this->holder = holder;
}
void BankAcc::set_type(string type) {
	this->type = type;
}
void BankAcc::set_balance(float balance) {
	this->balance = balance;
}
/*********************************** -- Others -- ***********************************/
void BankAcc::insert() {
	cout << "\t-: Inserting Bank Account Details :-" << endl;
	cout << "Enter Account Number = " << endl;
	cin >> acc_no;
	if (acc_no <= 0) {
		cout << "\a\tInvalid Input !!!" << endl;
	}
	cin.ignore();
	cout << "Enter Holder's Name = " << endl;
	getline(cin, holder);
	cout << "Enter Account Type = " << endl;
	getline(cin, type);
	cin.ignore();
	cout << "Enter balance = " << endl;
	cin >> balance;
	if (balance <= 0) {
		cout << "\a\tInvalid Input !!!" << endl;
	}
}
void BankAcc::display() {
	cout << "\t-: Displaying Bank Account Details :-" << endl;
	cout << "Account Number = " << acc_no << endl;
	cout << "Holder's Name = " << holder << endl;
	cout << "Account Type = " << type << endl;
	cout << "Balance = " << balance << endl;
}