#include"header.h"

/************************* -- Constructor -- *************************/
toolbooth::toolbooth() {
	total_cars = 0;
	total_money = 0.0;
}
/*************************** -- Member Functions -- **************************/
void toolbooth::paying_car(double fee = 5.0) {
	total_cars++;
	total_money = total_money + fee;
}
void toolbooth::nopay_car() {
	total_cars++;
}

void toolbooth::display() {
	cout << "Total Cars passed = " << total_cars << endl;
	cout << "Total Money collected = " << total_money << endl;
}