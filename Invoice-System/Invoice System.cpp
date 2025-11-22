#include "header.h"

using namespace std;

/**************************************** -- Implementation of Getter -- ****************************************/
string Invoice::get_part_number() {
    return part_number;
}

string Invoice::get_part_description() {
    return part_description;
}

int Invoice::get_quantity() {
    return quantity;
}

double Invoice::get_price_per_item() {
    return price_per_item;
}

/**************************************** -- Implementation of Setter -- ****************************************/
void Invoice::set_part_number(string new_part_number) {
    part_number = new_part_number;
}

void Invoice::set_part_description(string new_part_description) {
    part_description = new_part_description;
}

void Invoice::set_quantity(int new_quantity) {
    quantity = new_quantity;
}

void Invoice::set_price_per_item(double new_price_per_item) {
    price_per_item = new_price_per_item;
}

void Invoice::insert() {
    cout << "Enter part number: " << endl;
    getline(cin, part_number);
    cout << "Enter part description: " << endl;
    getline(cin, part_description);
    cout << "Enter quantity: " << endl;
    cin >> quantity;
    cout << "Enter price per item: " << endl;
    cin >> price_per_item;
}

void Invoice::display() {
    cout << "Part Number: " << part_number << endl;
    cout << "Part Description: " << part_description << endl;
    cout << "Quantity: " << quantity << endl;
    cout << "Price per item: " << price_per_item << endl;
}

double Invoice::invoiceAmount() {
    return quantity * price_per_item;
}
