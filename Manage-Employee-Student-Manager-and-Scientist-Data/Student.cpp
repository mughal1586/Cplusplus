#include "Student.h"

using namespace std;

/****************************** -- Constructor -- ******************************/
Student::Student() {
    school = "";
    degree = "";
}

Student::Student(string school, string degree) {
    this->school = school;
    this->degree = degree;
}

Student::Student(const Student& s) {
    school = s.school;
    degree = s.degree;
}

/****************************** -- Getter -- ******************************/
string Student::get_school() {
    return school;
}

string Student::get_degree() {
    return degree;
}

/****************************** -- Setter -- ******************************/
void Student::set_school(string school) {
    this->school = school;
}

void Student::set_degree(string degree) {
    this->degree = degree;
}

/****************************** -- Other -- ******************************/
void Student::getEdu() {
    cout << "\t**** -- Enter Student Details -- ****" << endl;
    cout << "Enter School = ";
    getline(cin, school);
    cin.ignore();
    cout << "Enter Degree = ";
    getline(cin, degree);
}

void Student::putEdu() {
    cout << "\t**** -- Student Details are -- ****" << endl;
    cout << "School = " << school << endl;
    cout << "Degree = " << degree << endl;
}
