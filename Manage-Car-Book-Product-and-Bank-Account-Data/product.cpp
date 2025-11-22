#include"product.h"

/********************************* -- Constructor -- *********************************/
Product::Product() {
	serial = 0;
	name = "";
	price = 0.0;
	quantity = 0;
}
Product::Product(int serial, string name, float price, int quantity) {
	this->serial = serial;
	this->name = name;
	this->price = price;
	this->quantity = quantity;
}
/*********************************** -- Getter -- ***********************************/
int Product::get_serial() {
	return serial;
}
string Product::get_name() {
	return name;
}
float Product::get_price() {
	return price;
}
int Product::get_quantity() {
	return quantity;
}
/*********************************** -- Setter -- ***********************************/
void Product::set_serial(int serial) {
	this->serial = serial;
}
void Product::set_name(string name) {
	this->name = name;
}
void Product::set_price(float price) {
	this->price = price;
}
void Product::set_quantity(int quantity) {
	this->quantity = quantity;
}
/*********************************** -- Others -- ***********************************/
void Product::insert() {
	cout << "\t-: Inserting Product Details :-" << endl;
	cout << "Enter serial number = " << endl;
	cin >> serial;
	if (serial <= 0) {
		cout << "\a\tInvalid Input !!!" << endl;
	}
	cin.ignore();
	cout << "Enter name = " << endl;
	getline(cin, name);
	cin.ignore();
	cout << "Enter price = " << endl;
	cin >> price;
	if (price <= 0) {
		cout << "\a\tInvalid Input !!!" << endl;
	}
	cout << "Enter quantity = " << endl;
	cin >> quantity;
	if (quantity <= 0) {
		cout << "\a\tInvalid Input !!!" << endl;
	}
}
void Product::display() {
	cout << "\t-: Displaying Product Details :-" << endl;
	cout << "Serial number = " << serial << endl;
	cout << "Name = " << name << endl;
	cout << "Price = " << price << endl;
	cout << "Quantity = " << quantity << endl;
}