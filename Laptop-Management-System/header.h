#include<iostream>
#include<string>
using namespace std;

class laptop {
private:
	string brand;
	string model;
	int serial;
	string color;
	float price;
	float processor_speed;
	int ram;
	float screen_size;
public:
	/**************************************** -- Constructor -- ****************************************/
	laptop() {
		brand = "";
		model = "";
		serial = 0;
		color = "";
		price = 0.0;
		processor_speed = 0.0;
		ram = 0;
		screen_size = 0.0;
	}
	/**************************************** -- Getter -- ****************************************/
	string get_brand();
	string get_model();
	int get_serial();
	string get_color();
	float get_price();
	float get_processor_speed();
	int get_ram();
	float get_screen_size();
	/**************************************** -- Setter -- ****************************************/
	void set_brand(string new_brand);
	void set_model(string new_model);
	void set_serial(int new_serial);
	void set_color(string new_color);
	void set_price(float new_price);
	void set_processor_speed(float new_processor_speed);
	void set_ram(int new_ram);
	void set_screen_size(float new_screen_size);
	void insert();
	void display();
};