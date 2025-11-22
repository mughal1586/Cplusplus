#include "header.h"

using namespace std;

/**************************************** -- Implementation of Getter -- ****************************************/
string laptop::get_brand() {
	return brand;
}
string laptop::get_model() {
	return model;
}
int laptop::get_serial() {
	return serial;
}
string laptop::get_color() {
	return color;
}
float laptop::get_price() {
	return price;
}
float laptop::get_processor_speed() {
	return processor_speed;
}
int laptop::get_ram() {
	return ram;
}
float laptop::get_screen_size() {
	return screen_size;
}

/**************************************** -- Implementation of Setter -- ****************************************/
void laptop::set_brand(string new_brand) {
	brand = new_brand;
}
void laptop::set_model(string new_model) {
	model = new_model;
}
void laptop::set_serial(int new_serial) {
	serial = new_serial;
}
void laptop::set_color(string new_color) {
	color = new_color;
}
void laptop::set_price(float new_price) {
	price = new_price;
}
void laptop::set_processor_speed(float new_processor_speed) {
	processor_speed = new_processor_speed;
}
void laptop::set_ram(int new_ram) {
	ram = new_ram;
}
void laptop::set_screen_size(float new_screen_size) {
	screen_size = new_screen_size;
}

void laptop::insert() {
	cout << "Enter brand name of laptop = " << endl;
	getline(cin, brand);
	cout << "Enter model name of laptop = " << endl;
	getline(cin, model);
	cout << "Enter serial number of laptop = " << endl;
	cin >> serial;
	cout << "Enter color of laptop = " << endl;
	cin.ignore();
	getline(cin, color);
	cout << "Enter price of laptop = " << endl;
	cin >> price;
	cout << "Enter processor speed of laptop = " << endl;
	cin >> processor_speed;
	cout << "Enter RAM of laptop = " << endl;
	cin >> ram;
	cout << "Enter screen size of laptop = " << endl;
	cin >> screen_size;
}

void laptop::display() {
	cout << "Enter brand name of laptop = " << brand << endl;
	cout << "Enter model name of laptop = " << model << endl;
	cout << "Enter serial number of laptop = " << serial << endl;
	cout << "Enter color of laptop = " << color << endl;
	cout << "Enter price of laptop = " << price << endl;
	cout << "Enter processor speed of laptop = " << processor_speed << endl;
	cout << "Enter RAM of laptop = " << ram << endl;
	cout << "Enter screen size of laptop = " << screen_size << endl;
}