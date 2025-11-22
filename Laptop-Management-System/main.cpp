#include "header.h"

using namespace std;

int main() {
	laptop l1;

	l1.set_brand("ASUS");
	l1.set_model("Vivobook S15");
	l1.set_color("Grey");
	l1.set_price(80000);
	l1.set_processor_speed(2.4);
	l1.set_ram(12);
	l1.set_screen_size(14);
	
	cout << "Brand = " << l1.get_brand() << endl;
	cout << "Model = " << l1.get_model() << endl;
	cout << "Color = " << l1.get_color() << endl;
	cout << "Price = " << l1.get_price() << endl;
	cout << "Processor Speed = " << l1.get_processor_speed() << endl;
	cout << "RAM  = " << l1.get_ram() << endl;
	cout << "Screen size = " << l1.get_screen_size() << endl;

	cout << "\a\t\t******** -- Taking input from user --  ********" << endl;
	laptop l2;
	l2.insert();
	cout << "Details entered by User are :" << endl;
	l2.display();

	return 0;
}