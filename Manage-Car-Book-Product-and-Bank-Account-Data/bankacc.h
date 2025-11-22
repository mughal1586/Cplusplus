#include<iostream>
#include<string>

using namespace std;

class BankAcc {
private:
	int acc_no;
	string holder;
	string type;
	float balance;
public:
	/********************************* -- Constructor -- *********************************/
	BankAcc();
	BankAcc(int acc_no, string holder, string type, float balance);
	/*********************************** -- Getter -- ***********************************/
	int get_acc_no();
	string get_holder();
	string get_type();
	float get_balance();
	/*********************************** -- Setter -- ***********************************/
	void set_acc_no(int acc_no);
	void set_holder(string holder);
	void set_type(string type);
	void set_balance(float balance);
	/*********************************** -- Others -- ***********************************/
	void insert();
	void display();
};