#include "CPU.h"

/************************************ -- Constructors -- ************************************/
CPU::CPU() {
    clockSpeed = 0.0;
    cores = 0;
}

CPU::CPU(float clockSpeed, int cores) {
    this->clockSpeed = clockSpeed;
    this->cores = cores;
}

CPU::CPU(CPU& c1) {
    this->clockSpeed = c1.clockSpeed;
    this->cores = c1.cores;
}

/************************************ -- Getter -- ************************************/
float CPU::get_clockSpeed() {
    return clockSpeed;
}

int CPU::get_cores() {
    return cores;
}

/************************************ -- Setter -- ************************************/
void CPU::set_clockSpeed(float clockSpeed) {
    this->clockSpeed = clockSpeed;
}

void CPU::set_cores(int cores) {
    this->cores = cores;
}

/************************************ -- Other Functions -- ************************************/
void CPU::display() {
    cout << endl;
    cout << "\t***** -- CPU Details -- *****" << endl;
    cout << "Clock Speed = " << clockSpeed << " GHz" << endl;
    cout << "Cores = " << cores << endl;
    cout << endl;
}
