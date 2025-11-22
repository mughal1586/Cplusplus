#include "Car.h"
#include "Customer.h"
#include "RentalCompany.h"

using namespace std;

int main() {
    // Create RentalCompany object
    RentalCompany company;

    // Create Cars and Add them to the fleet
    Car car1("Toyota", "Camry", 2020);
    Car car2("Honda", "Civic", 2021);
    Car car3("Ford", "Mustang", 2022);

    company.addCarToFleet(car1);
    company.addCarToFleet(car2);
    company.addCarToFleet(car3);

    // Create a Customer
    Customer customer1("Muhammad", 101);

    // Display available cars
    company.displayAvailableCars();

    // Rent a car
    int carChoice;
    cout << "Enter car number to rent = ";
    cin >> carChoice;
    company.rentCar(customer1, carChoice - 1);

    // Display available cars after renting
    company.displayAvailableCars();

    // Return a car
    int returnChoice;
    cout << "Enter car number to return = ";
    cin >> returnChoice;
    company.returnCar(customer1, returnChoice - 1);

    return 0;
}
