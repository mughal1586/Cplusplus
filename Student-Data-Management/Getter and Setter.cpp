#include "header.h"

using namespace std;

/******************************************* -- Getters -- *******************************************/

int Student :: get_sap() {
	return sap;
}
string Student::get_name() {
	return name;
}
float Student::get_gpa() {
	return gpa;
}

/******************************************* -- Setters -- *******************************************/

void Student::set_sap(int new_sap) {
	sap = new_sap;
}
void Student::set_name(string new_name) {
	name = new_name;
}
void Student::set_gpa(float new_gpa) {
	gpa = new_gpa;
}