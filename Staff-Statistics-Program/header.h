#include<iostream>
#include<string>

using namespace std;

class Employee {
private:
	int emp_no;
	string Name;
	float Compen;
public:
	/******************************** -- Constructor -- ******************************/
	Employee();
	Employee(int no, string name, float compen);
	/******************************** -- Getter -- **********************************/
	int get_emp_no();
	string get_name();
	float get_compen();
	/******************************** -- Setter -- *********************************/
	void set_emp_no(int new_no);
	void set_name(string new_name);
	void set_compen(float compen);
	/******************************** -- Member Functions -- **********************/
	void insert();
	void display();
};