#include "CPU.h"
#include "RAM.h"

using namespace std;

int main() {
    CPU cpu1;
    RAM ram1;

    cpu1.set_clockSpeed(1.80);
    cpu1.set_cores(8);
    ram1.set_capacity(12);

    int opt = 0;
    do {
        cout << "**************** -- Computer System Menu -- ****************" << endl;
        cout << "1. Display CPU Info" << endl;
        cout << "2. Display RAM Info" << endl;
        cout << "3. Edit CPU" << endl;
        cout << "4. Edit RAM" << endl;
        cout << "5. Exit" << endl;
        cout << "Choose = ";
        cin >> opt;

        if (opt == 1) {
            cpu1.display();
        }
        else if (opt == 2) {
            ram1.display();
        }
        else if (opt == 3) {
            double newClockSpeed;
            int newCores;
            cout << "Enter new CPU Clock Speed (GHz) = " << endl;
            cin >> newClockSpeed;
            cout << "Enter new CPU Cores = " << endl;
            cin >> newCores;
            cpu1.set_clockSpeed(newClockSpeed);
            cpu1.set_cores(newCores);
            cout << "\a\tCPU updated successfully !!!" << endl;
        }
        else if (opt == 4) {
            int newCapacity;
            cout << "Enter new RAM Capacity (GB) = " << endl;
            cin >> newCapacity;
            ram1.set_capacity(newCapacity);
            cout << "\a\tRAM updated successfully !!!" << endl;
        }
        else if (opt == 5) {
            cout << "\tExiting..." << endl;
        }
        else {
            cout << "\a\tInvalid input !!!\nTry again." << endl;
        }
    } while (opt != 5);

    return 0;
}
