#include<iostream>
#include<string>

using namespace std;

class Product {
private: 
	int serial;
	string name;
	float price;
	int quantity;
public:
	/********************************* -- Constructor -- *********************************/
	Product();
	Product(int serial, string name, float price, int quantity);
	/*********************************** -- Getter -- ***********************************/
	int get_serial();
	string get_name();
	float get_price();
	int get_quantity();
	/*********************************** -- Setter -- ***********************************/
	void set_serial(int serial);
	void set_name(string name);
	void set_price(float price);
	void set_quantity(int quantity);
	/*********************************** -- Others -- ***********************************/
	void insert();
	void display();
};