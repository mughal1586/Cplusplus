#include "Manager.h"

using namespace std;

/****************************** -- Constructor -- ******************************/
Manager::Manager() {
    title = "";
    dues = 0.0;
}

Manager::Manager(string title, double dues) {
    this->title = title;
    this->dues = dues;
}

Manager::Manager(const Manager& m) {
    title = m.title;
    dues = m.dues;
}

/****************************** -- Getter -- ******************************/
string Manager::get_title() {
    return title;
}

double Manager::get_dues() {
    return dues;
}

/****************************** -- Setter -- ******************************/
void Manager::set_title(string title) {
    this->title = title;
}

void Manager::set_dues(double dues) {
    this->dues = dues;
}

/****************************** -- Other -- ******************************/
void Manager::getData() {
    cout << "\t**** -- Enter Manager Details -- ****" << endl;
    cout << "Enter Manager Title = ";
    getline(cin, title);
    cin.ignore();
    cout << "Enter Manager Dues = ";
    cin >> dues;
}

void Manager::putData() {
    cout << "\t**** -- Manager Details are -- ****" << endl;
    cout << "Manager Title = " << title << endl;
    cout << "Manager Dues = " << dues << endl;
}
