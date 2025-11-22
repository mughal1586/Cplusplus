#include "header.h"

/************************** -- Constructor -- **************************/

Heater::Heater() {                       //Non-parameterized
	temprature = 15;
}

Heater::Heater(int temp) {              //Parameterized
	temprature = temp;
}

/************************** -- Getter -- **************************/

int Heater::get_temprature() {
	return temprature;
}

/************************** -- Setter -- **************************/

void Heater::set_temprature(int t) {
	temprature = t;
}

void Heater :: display() {

	char choose,opt;
	do {
	cout << "Type 'I' or 'i' for increasing temprature" << endl;
	cout << "Type 'D' or 'd' for decreasing temprature" << endl;
	cout << "Type 'E' oe 'e' for exit" << endl;

	cout << "Choose = " << endl;
	cin >> choose;

		if (choose == 'I' || choose == 'i') {
			if (temprature >= 100) {
				cout << "\a\a\aTemprature Maximum level reached !!!" << endl;
				return;
			}
			temprature = temprature + 5;
			cout << "New Temprature = " << temprature << endl;
		}

		else if (choose == 'D' || choose == 'd') {
			if (temprature <= 0) {
				cout << "\a\a\aTemprature Minimum level reached !!!" << endl;
				return;
			}
			temprature = temprature - 5;
			cout << "New Temprature = " << temprature << endl;
		}
		else if (choose == 'E' || choose == 'e') {
			return;
		}
		else {
			cout << "Invalid Input !!!" << endl;
		}        
		cout << "Type 'Y' to repeat it." << endl;
		cin >> opt;
	} while (opt == 'Y' || opt == 'y');
}