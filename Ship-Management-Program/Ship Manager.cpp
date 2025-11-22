#include "header.h"

/***************************** -- Constructor -- *************************/
Ship::Ship() {                             //Non-parameterized
	Name = "";
	No_of_passengers = 0;
	Capacity = 0.0;
}
Ship::Ship(string name, int no_of_passengers, float capacity) {                        //Parameterized
	Name = name;
	No_of_passengers = no_of_passengers;
	Capacity = capacity;
}
/***************************** -- Getter -- *****************************/
string Ship::get_name() {
	return Name;
}
int Ship::get_passengers() {
	return No_of_passengers;
}
float Ship::get_capacity() {
	return Capacity;
}
/***************************** -- Setter -- ****************************/
void Ship::set_name(string new_name) {
	Name = new_name;
}
void Ship::set_passengers(int new_passengers) {
	No_of_passengers = new_passengers;
}
void Ship::set_capacity(float new_capacity) {
	Capacity = new_capacity;
}