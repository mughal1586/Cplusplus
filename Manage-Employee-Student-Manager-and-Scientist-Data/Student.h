#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string school;
    string degree;
public:
    /****************************** -- Constructor -- ******************************/
    Student();
    Student(string school, string degree);
    Student(const Student& s);

    /****************************** -- Getter -- ******************************/
    string get_school();
    string get_degree();

    /****************************** -- Setter -- ******************************/
    void set_school(string school);
    void set_degree(string degree);

    /****************************** -- Other -- ******************************/
    void getEdu();
    void putEdu();
};