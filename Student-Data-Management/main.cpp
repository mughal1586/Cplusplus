#include"header.h"

using namespace std;

int main() 
{
	Student s1;
	int sap = 0;
	float gpa = 0.0;
	string name;

	cout << "Enter SAP ID = " << endl;
	cin >> sap;

	s1.set_sap(sap);                   //Setter for SAP ID

	cout << "Enter name = " << endl;
	cin.ignore();
	getline(cin, name);
	
	s1.set_name(name);                 //Setter for Name

	cout << "Enter GPA = " << endl;
	cin >> gpa;

	s1.set_gpa(gpa);                 //Setter for GPA

	cout <<"\a\tSAP ID = "<< s1.get_sap() << endl;                 //Getter for SAP ID                 
	cout <<"\a\tName = "<< s1.get_name() << endl;                 //Getter for Name
	cout <<"\a\tGPA = "<< s1.get_gpa() << endl;                 //Getter for GPA

	return 0;
}