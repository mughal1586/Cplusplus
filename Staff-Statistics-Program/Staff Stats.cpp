#include "header.h"

/******************************** -- Constructor -- ******************************/
Employee::Employee() {
	emp_no = 0;
	Name = "";
	Compen = 0.0;
}
Employee::Employee(int no, string name, float compen) {
	emp_no = no;
	Name = name;
	Compen = compen;
}
/******************************** -- Getter -- **********************************/
int Employee::get_emp_no() {
	return emp_no;
}
string Employee::get_name() {
	return Name;
}
float Employee::get_compen() {
	return Compen;
}
/******************************** -- Setter -- *********************************/
void Employee::set_emp_no(int new_no) {
	emp_no = new_no;
}
void Employee::set_name(string new_name) {
	Name = new_name;
}
void Employee::set_compen(float compen) {
	Compen = compen;
}
/*************************** -- Member Functions -- ****************************/
void Employee::insert() {
	cout << endl;
	cout << "Enter employee number = " << endl;
	cin >> emp_no;
	set_emp_no(emp_no);
	cout << "Enter employee name = " << endl;
	cin.ignore();
	getline(cin, Name);
	set_name(Name);
	cout << "Enter employee's compensation = " << endl;
	cin >> Compen;
	set_compen(Compen);
}
void Employee::display() {
	cout << endl;
	cout << "\tEmployee Number = " << get_emp_no() << endl;
	cout << "\tEmployee Name = " << get_name() << endl;
	cout << "\tEmployee's Compensation = " << get_compen() << endl;
}