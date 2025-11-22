#include<iostream>
#include<string>
using namespace std;
class Student {
private:
	int sap;
	string name;
	float gpa;

public:

	/******************************************* -- Constructor -- *******************************************/

	Student() {

		sap = 0;
		name = "";
		gpa = 0.0;

	}

	/******************************************* -- Getters -- *******************************************/

	int get_sap();
	string get_name();
	float get_gpa();

	/******************************************* -- Setters -- *******************************************/

	void set_sap(int new_sap);
	void set_name(string new_name);
	void set_gpa(float new_gpa);
	
};
