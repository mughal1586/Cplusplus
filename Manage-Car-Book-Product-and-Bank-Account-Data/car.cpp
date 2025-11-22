#include"car.h"

/********************************* -- Constructor -- *********************************/
Car::Car() {
	company = "";
	model = "";
	color = "";
	fuel_avg = 0;
}
Car::Car(string company, string model, string color, int fuel_avg) {
	this->company = company;
	this->model = model;
	this->color = color;
	this->fuel_avg = fuel_avg;
}
/*********************************** -- Getter -- ***********************************/
string Car::get_company() {
	return company;
}
string Car::get_model() {
	return model;
}
string Car::get_color() {
	return color;
}
int Car::get_fuel_avg() {
	return fuel_avg;
}
/*********************************** -- Setter -- ***********************************/
void Car::set_company(string company) {
	this->company = company;
}
void Car::set_model(string model) {
	this->model = model;
}
void Car::set_color(string color) {
	this->color = color;
}
void Car::set_fuel_avg(int fuel_avg) {
	this->fuel_avg = fuel_avg;
}
/*********************************** -- Others -- ***********************************/
void Car::insert() {
	cout << "\t-: Inserting Car Details :-" << endl;
	cout << "Enter company name = " << endl;
	getline(cin, company);
	cout << "Enter model = " << endl;
	getline(cin, model);
	cout << "Enter color = " << endl;
	getline(cin, color);
	cin.ignore();
	cout << "Enter Fuel-Average = " << endl;
	cin >> fuel_avg;
	if (fuel_avg <= 0) {
		cout << "\a\tInvalid Input !!!" << endl;
		return;
	}
}
void Car::display() {
	cout << "\t-: Displaying Car Details :-" << endl;
	cout << "Company = " << company << endl;
	cout << "Model = " << model << endl;
	cout << "Color = " << color << endl;
	cout << "Fuel Average = " << fuel_avg << endl;
}