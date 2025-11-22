#include<iostream>
#include<string>
using namespace std;

class student {
private:
	string name;
	int rollno;
	float marks;
	float percentage;
public:
	/**************************************** -- Constructor -- ****************************************/
	student() {
		name = "";
		rollno = 0;
		marks = 0.0;
		percentage = 0.0;
	}
	/**************************************** -- Getters -- ****************************************/
	string get_name();
	int get_rollno();
	float get_marks();
	float get_percentage();
	/**************************************** -- Setters -- ****************************************/
	void set_name(string new_name);
	void set_rollno(int new_rollno);
	void set_marks(float new_marks);
	void set_percentage(float new_percentage);


	void insert();
	void display();
};