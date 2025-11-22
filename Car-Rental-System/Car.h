#include <iostream>
#include <string>

using namespace std;

class Car {
private:
    string make;
    string model;
    int year;
public:
    /**************************** -- Constructor -- ****************************/
    Car();
    Car(string make, string model, int year);
    Car(const Car& c);

    /**************************** -- Getter -- ****************************/
    string get_make();
    string get_model();
    int get_year();

    /**************************** -- Setter -- ****************************/
    void set_make(string make);
    void set_model(string model);
    void set_year(int year);

    /**************************** -- Other -- ****************************/
    void displayCarInfo();
};