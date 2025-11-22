#include "header.h"

using namespace std;

/**************************** -- Getter -- ****************************/
string Employee::get_first_name() {
    return first_name;
}
string Employee::get_last_name() {
    return last_name;
}
double Employee::get_monthly_salary() {
    return monthly_salary;
}

/**************************** -- Setter -- ****************************/
void Employee::set_first_name(string f_name) {
    first_name = f_name;
}
void Employee::set_last_name(string l_name) {
    last_name = l_name;
}
void Employee::set_monthly_salary(double salary) {
    if (salary > 0) {
        monthly_salary = salary;
    }
    else {
        monthly_salary = 0.0;
    }
}

double Employee::yearly_salary() {
    return monthly_salary * 12;
}

void Employee::give_raise() {
    monthly_salary = monthly_salary + (monthly_salary * 0.10);
}
