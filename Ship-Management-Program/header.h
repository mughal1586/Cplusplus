#include<iostream>
#include<string>

using namespace std;

class Ship {
private:
	string Name;
	int No_of_passengers;
	float Capacity;
public:
	/***************************** -- Constructor -- *************************/
	Ship();
	Ship(string name, int no_of_passengers, float capacity);
	/***************************** -- Getter -- *****************************/
	string get_name();
	int get_passengers();
	float get_capacity();
	/***************************** -- Setter -- ****************************/
	void set_name(string new_name);
	void set_passengers(int new_passengers);
	void set_capacity(float new_capacity);
};