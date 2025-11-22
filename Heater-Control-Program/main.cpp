#include "header.h"

int main() {
	Heater h;

	Heater h1(15);

	cout <<"Temprature = "<< h1.get_temprature() << endl;

	h1.display();
	
	return 0;
}