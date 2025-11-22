#include "Car.h"
#include "Customer.h"

using namespace std;

class RentalCompany {
private:
    Car fleet[10]; // Array to store up to 10 cars
    int totalCars; // To keep track of how many cars are in the fleet
public:
    /**************************** -- Constructor -- ****************************/
    RentalCompany();
    RentalCompany(const RentalCompany& r);

    /**************************** -- Methods -- ****************************/
    void addCarToFleet(Car car);
    void displayAvailableCars();
    void rentCar(Customer& customer, int carIndex);
    void returnCar(Customer& customer, int carIndex);
};