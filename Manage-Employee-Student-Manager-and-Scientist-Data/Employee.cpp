#include "Employee.h"

using namespace std;

/****************************** -- Constructor -- ******************************/
Employee::Employee() {
    id = 0;
    name = "";
}

Employee::Employee(int id, string name) {
    this->id = id;
    this->name = name;
}

Employee::Employee(const Employee& e) {
    id = e.id;
    name = e.name;
}

/****************************** -- Getter -- ******************************/
int Employee::get_id() {
    return id;
}

string Employee::get_name() {
    return name;
}

/****************************** -- Setter -- ******************************/
void Employee::set_id(int id) {
    this->id = id;
}

void Employee::set_name(string name) {
    this->name = name;
}

/****************************** -- Other -- ******************************/
void Employee::getData() {
    cout << "\t**** -- Enter Employee Details -- ****" << endl;
    cout << "Enter Employee ID = ";
    cin >> id;
    cin.ignore();
    cout << "Enter Employee Name = ";
    getline(cin, name);
}

void Employee::putData() {
    cout << "\t**** -- Employee Details are -- ****" << endl;
    cout << "Employee ID = " << id << endl;
    cout << "Employee Name = " << name << endl;
}
