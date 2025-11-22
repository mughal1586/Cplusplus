#include<iostream>
#include<string>

using namespace std;

class Heater {
private:
	int temprature;
public:
/************************** -- Constructor -- **************************/
	Heater();           //Non-parameterized
	Heater(int temp);           //Parameterized
	/************************** -- Getter -- **************************/
	int get_temprature();
	/************************** -- Setter -- **************************/
	void set_temprature(int t);

	void display();

};