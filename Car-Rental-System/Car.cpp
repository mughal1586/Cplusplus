#include "Car.h"

using namespace std;

/**************************** -- Constructor -- ****************************/
Car::Car() {
    make = "";
    model = "";
    year = 0;
}

Car::Car(string make, string model, int year) {
    this->make = make;
    this->model = model;
    this->year = year;
}

Car::Car(const Car& c) {
    make = c.make;
    model = c.model;
    year = c.year;
}

/**************************** -- Getter -- ****************************/
string Car::get_make() {
    return make;
}

string Car::get_model() {
    return model;
}

int Car::get_year() {
    return year;
}

/**************************** -- Setter -- ****************************/
void Car::set_make(string make) {
    this->make = make;
}

void Car::set_model(string model) {
    this->model = model;
}

void Car::set_year(int year) {
    this->year = year;
}

void Car::displayCarInfo() {
    cout << "Make: " << make << endl;
    cout << "Model = " << model << endl;
    cout << "Year = " << year << endl;
}
