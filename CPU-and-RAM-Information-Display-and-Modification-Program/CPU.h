#include <iostream>
#include <string>

using namespace std;

class CPU {
private:
    double clockSpeed; // in GHz
    int cores;

public:
    /************************************ -- Constructors -- ************************************/
    CPU();
    CPU(float clockSpeed, int cores);
    CPU(CPU& c1);

    /************************************ -- Getter -- ************************************/
    float get_clockSpeed();
    int get_cores();

    /************************************ -- Setter -- ************************************/
    void set_clockSpeed(float clockSpeed);
    void set_cores(int cores);

    /************************************ -- Other Functions -- ************************************/
    void display();
};