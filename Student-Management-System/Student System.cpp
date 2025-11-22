#include "header.h"

using namespace std;

/**************************************** -- Getters -- ****************************************/
string student :: get_name() {
	return name;
}
int student :: get_rollno() {
	return rollno;
}
float student :: get_marks() {
	return marks;
}
float student :: get_percentage() {
	return percentage;
}
/**************************************** -- Setters -- ****************************************/
void student :: set_name(string new_name) {
	name = new_name;
}
void student :: set_rollno(int new_rollno) {
	rollno = new_rollno;
}
void student :: set_marks(float new_marks) {
	marks = new_marks;
}
void student :: set_percentage(float new_percentage) {
	percentage = new_percentage;
}


void student::insert() {
	cout << "Enter your name = " << endl;
	getline(cin, name);
	cin.ignore();
	cout << "Enter your Roll no = " << endl;
	cin >> rollno;
	cout << "Enter total marks = " << endl;
	cin >> marks;
	cout << "Enter your percentage = " << endl;
	cin >> percentage;
}

void student::display() {
	cout << "Name = " << name << endl;
	cout << "Roll No = " << rollno << endl;
	cout << "Total Marks = " << marks << endl;
	cout << "Percentage = " << percentage << endl;
}