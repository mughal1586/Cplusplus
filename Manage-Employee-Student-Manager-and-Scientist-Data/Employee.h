#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    int id;
    string name;
public:
    /****************************** -- Constructor -- ******************************/
    Employee();
    Employee(int id, string name);
    Employee(const Employee& e);

    /****************************** -- Getter -- ******************************/
    int get_id();
    string get_name();

    /****************************** -- Setter -- ******************************/
    void set_id(int id);
    void set_name(string name);

    /****************************** -- Other -- ******************************/
    void getData();
    void putData();
};
