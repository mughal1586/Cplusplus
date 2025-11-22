#include<iostream>
#include<string>

using namespace std;

class toolbooth {
private:
	int total_cars;
	double total_money;
public:
	/************************* -- Constructor -- *************************/
	toolbooth();
	/*************************** -- Member Functions -- **************************/
	void paying_car(double fee = 5.0);
	void nopay_car();

	void display();
};