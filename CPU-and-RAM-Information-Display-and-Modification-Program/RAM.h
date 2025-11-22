#include <iostream>
#include <string>

using namespace std;

class RAM {
private:
    int capacity; // in GB

public:
    /************************************ -- Constructors -- ************************************/
    RAM();
    RAM(int capacity);
    RAM(RAM& r1);

    /************************************ -- Getter -- ************************************/
    int get_capacity();

    /************************************ -- Setter -- ************************************/
    void set_capacity(int capacity);

    /************************************ -- Other Functions -- ************************************/
    void display();
};