#include <iostream>
#include <string>

using namespace std;

class Manager {
private:
    string title;
    double dues;
public:
    /****************************** -- Constructor -- ******************************/
    Manager();
    Manager(string title, double dues);
    Manager(const Manager& m);

    /****************************** -- Getter -- ******************************/
    string get_title();
    double get_dues();

    /****************************** -- Setter -- ******************************/
    void set_title(string title);
    void set_dues(double dues);

    /****************************** -- Other -- ******************************/
    void getData();
    void putData();
};