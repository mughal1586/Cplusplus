#include "Customer.h"

using namespace std;

/**************************** -- Constructor -- ****************************/
Customer::Customer() {
    name = "";
    id = 0;
}

Customer::Customer(string name, int id) {
    this->name = name;
    this->id = id;
}

Customer::Customer(const Customer& c) {
    name = c.name;
    id = c.id;
}

/**************************** -- Getter -- ****************************/
string Customer::get_name() {
    return name;
}

int Customer::get_id() {
    return id;
}

/**************************** -- Setter -- ****************************/
void Customer::set_name(string name) {
    this->name = name;
}

void Customer::set_id(int id) {
    this->id = id;
}

/**************************** -- Other -- ****************************/
void Customer::displayCustomerInfo() {
    cout << "Customer ID = " << id << endl;
    cout << "Customer Name: " << name << endl;
}
