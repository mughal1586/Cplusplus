#include "ram.h"

/************************************ -- Constructors -- ************************************/
RAM::RAM() {
    capacity = 0;
}

RAM::RAM(int capacity) {
    this->capacity = capacity;
}

RAM::RAM(RAM& r1) {
    this->capacity = r1 .capacity;
}

/************************************ -- Getter -- ************************************/
int RAM::get_capacity() {
    return capacity;
}

/************************************ -- Setter -- ************************************/
void RAM::set_capacity(int capacity) {
    this->capacity = capacity;
}

/************************************ -- Other Functions -- ************************************/
void RAM::display() {
    cout << endl;
    cout << "\t***** -- RAM Details -- *****" << endl;
    cout << "Capacity = " << capacity << " GB" << endl;
    cout << endl;
}
