#include "header.h"

using namespace std;

int main() {
	student s1;

	s1.set_name("Muhammad Sagheer");
	s1.set_rollno(65647);
	s1.set_marks(85.5);
	s1.set_percentage(85.5);

	cout << "Name = " << s1.get_name() << endl;
	cout << "Roll no = " << s1.get_rollno() << endl;
	cout << "Marks = " << s1.get_marks() << endl;
	cout << "Percentage = " << s1.get_percentage() << endl;


	student s2;
	cout << "\a\t\t******** -- Taking input from user --  ********" << endl;
	s2.insert();
	cout << "Details entered by User are :" << endl;
	s2.display();

	return 0;
}