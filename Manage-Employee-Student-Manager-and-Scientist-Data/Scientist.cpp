#include "Scientist.h"

using namespace std;

/****************************** -- Constructor -- ******************************/
Scientist::Scientist() {
    pubs = 0;
}

Scientist::Scientist(int pubs) {
    this->pubs = pubs;
}

Scientist::Scientist(const Scientist& s) {
    pubs = s.pubs;
}

/****************************** -- Getter -- ******************************/
int Scientist::get_pubs() {
    return pubs;
}

/****************************** -- Setter -- ******************************/
void Scientist::set_pubs(int pubs) {
    this->pubs = pubs;
}

/****************************** -- Other -- ******************************/
void Scientist::getData() {
    cout << "\t**** -- Enter Scientist Details -- ****" << endl;
    cout << "Enter number of Publications = ";
    cin >> pubs;
}

void Scientist::putData() {
    cout << "\t**** -- Scientist Details are -- ****" << endl;
    cout << "Number of Publications = " << pubs << endl;
}
