#include<iostream>
#include <string>
using namespace std;

class Employee {
private:
    string first_name;
    string last_name;
    double monthly_salary;

public:
    /**************************** -- Constructor -- ****************************/
    Employee() {
        first_name = "";
        last_name = "";
        monthly_salary = 0.0;
    }
    /**************************** -- Getter -- ****************************/
    string get_first_name();
    string get_last_name();
    double get_monthly_salary();
    /**************************** -- Setter -- ****************************/
    void set_first_name(string f_name);
    void set_last_name(string l_name);
    void set_monthly_salary(double salary);


    double yearly_salary();
    void give_raise();
};