#include "RentalCompany.h"

using namespace std;

/**************************** -- Constructor -- ****************************/
RentalCompany::RentalCompany() {
    totalCars = 0;
}

/**************************** -- Methods -- ****************************/
RentalCompany::RentalCompany(const RentalCompany& r) {
    totalCars = r.totalCars;
    for (int i = 0; i < totalCars; i++) {
        fleet[i] = r.fleet[i];
    }
}

void RentalCompany::addCarToFleet(Car car) {
    if (totalCars < 10) {
        fleet[totalCars] = car;
        totalCars++;
    }
    else {
        cout << "Fleet is full! Cannot add more cars." << endl;
    }
}

void RentalCompany::displayAvailableCars() {
    if (totalCars == 0) {
        cout << "No cars available." << endl;
    }
    else {
        cout << "Available Cars: " << endl;
        for (int i = 0; i < totalCars; i++) {
            cout << i + 1 << ". ";
            fleet[i].displayCarInfo();
        }
    }
}

void RentalCompany::rentCar(Customer& customer, int carIndex) {
    if (carIndex >= 0 && carIndex < totalCars) {
        cout << customer.get_name() << " rented a ";
        fleet[carIndex].displayCarInfo();
        // Remove the car from the fleet by shifting the remaining cars
        for (int i = carIndex; i < totalCars - 1; i++) {
            fleet[i] = fleet[i + 1];
        }
        totalCars--; // Reduce the total car count
    }
    else {
        cout << "Invalid car selection!" << endl;
    }
}

void RentalCompany::returnCar(Customer& customer, int carIndex) {
    if (carIndex >= 0 && carIndex < totalCars) {
        cout << customer.get_name() << " returned a ";
        fleet[carIndex].displayCarInfo();
    }
    else {
        cout << "Invalid car index!" << endl;
    }
}
