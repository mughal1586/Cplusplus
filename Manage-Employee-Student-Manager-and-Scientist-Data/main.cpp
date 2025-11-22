#include "Employee.h"
#include "Student.h"
#include "Manager.h"
#include "Scientist.h"

using namespace std;

int main() {
    Employee e1;
    Student s1;
    Manager m1;
    Scientist sc1;

    e1.getData();
    e1.putData();

    s1.getEdu();
    s1.putEdu();

    m1.getData();
    m1.putData();

    sc1.getData();
    sc1.putData();

    return 0;
}
