#include<iostream>
#include<string>

using namespace std;
class Car {
private:
	string company;
	string model;
	string color;
	int fuel_avg;
public:
	/********************************* -- Constructor -- *********************************/
	Car();
	Car(string company, string model, string color, int fuel_avg);
	/*********************************** -- Getter -- ***********************************/
	string get_company();
	string get_model();
	string get_color();
	int get_fuel_avg();
	/*********************************** -- Setter -- ***********************************/
	void set_company(string company);
	void set_model(string model);
	void set_color(string color);
	void set_fuel_avg(int fuel_avg);
	/*********************************** -- Others -- ***********************************/
	void insert();
	void display();
};

