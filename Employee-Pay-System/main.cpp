#include "header.h"

using namespace std;

int main() {

    Employee emp1;
    Employee emp2;

    emp1.set_first_name("Muhammad");
    emp1.set_last_name("Sagheer");
    emp1.set_monthly_salary(3000.00);

    emp2.set_first_name("Nouman");
    emp2.set_last_name("Naeem");
    emp2.set_monthly_salary(4000.00);

    cout << "Employee 1 = " << emp1.get_first_name() << " " << emp1.get_last_name() << endl;
    cout << "Yearly salary = " << emp1.yearly_salary() << endl;

    cout << "Employee 2 = " << emp2.get_first_name() << " " << emp2.get_last_name() << endl;
    cout << "Yearly salary = " << emp2.yearly_salary() << endl;

    emp1.give_raise();
    emp2.give_raise();

    cout << "\tAfter 10% raise :" << endl;
    cout << "Employee 1 = " << emp1.get_first_name() << " " << emp1.get_last_name() << endl;
    cout << "Yearly salary = " << emp1.yearly_salary() << endl;

    cout << "Employee 2 = " << emp2.get_first_name() << " " << emp2.get_last_name() << endl;
    cout << "Yearly salary = " << emp2.yearly_salary() << endl;

    return 0;
}
