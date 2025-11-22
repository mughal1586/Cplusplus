#include "header.h"

int main() {
	Ship s,s2,s3;
	Ship s1("Mine", 10, 100.0);

	string name;
	int passengers;
	float capacity;
	
	cout << "Enter Ship's Name = " << endl;
	getline(cin, name);

	s.set_name(name);

	cout << "Enter number of passengers on the ship = " << endl;
	cin >> passengers;

	s.set_passengers(passengers);

	cout << "Enter weight capacity of a ship = " << endl;
	cin >> capacity;

	s.set_capacity(capacity);

	cout << "Enter Ship's Name = " << endl;
	cin.ignore();
	getline(cin, name);

	s2.set_name(name);

	cout << "Enter number of passengers on the ship = " << endl;
	cin >> passengers;

	s2.set_passengers(passengers);

	cout << "Enter weight capacity of a ship = " << endl;
	cin >> capacity;

	s2.set_capacity(capacity);

	cout << "Enter Ship's Name = " << endl;
	cin.ignore();
	getline(cin, name);

	s3.set_name(name);

	cout << "Enter number of passengers on the ship = " << endl;
	cin >> passengers;

	s3.set_passengers(passengers);

	cout << "Enter weight capacity of a ship = " << endl;
	cin >> capacity;

	s3.set_capacity(capacity);


	cout << "Details entered by default : " << endl;

	cout << "\tShip's Name = " << s1.get_name() << endl;
	cout << "\tNumber of passengers on Ship = " << s1.get_passengers() << endl;
	cout << "\tWeight capacity of Ship = " << s1.get_capacity() << endl;
	cout << endl;

	cout << "Details of 3 objects entered by user are : " << endl;

	cout << "\tShip's Name = " << s.get_name() << endl;
	cout << "\tNumber of passengers on Ship = " << s.get_passengers() << endl;
	cout << "\tWeight capacity of Ship = " << s.get_capacity() << endl;
	cout << endl;

	cout << "\tShip's Name = " << s2.get_name() << endl;
	cout << "\tNumber of passengers on Ship = " << s2.get_passengers() << endl;
	cout << "\tWeight capacity of Ship = " << s2.get_capacity() << endl;
	cout << endl;

	cout << "\tShip's Name = " << s3.get_name() << endl;
	cout << "\tNumber of passengers on Ship = " << s3.get_passengers() << endl;
	cout << "\tWeight capacity of Ship = " << s3.get_capacity() << endl;


	return 0;
}