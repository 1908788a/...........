#include <iostream>
#include "Car.h"
#include "Bus.h"
#include "Motorbike.h"

int main() {
    Vehicle* car = new Car(1);
    Vehicle* bus = new Bus(2);
    Vehicle* motorbike = new Motorbike(3);

    std::cout << "Car ID: " << car->getID() << ", Parking Duration: " << car->getParkingDuration() << " seconds\n";
    std::cout << "Bus ID: " << bus->getID() << ", Parking Duration: " << bus->getParkingDuration() << " seconds\n";
    std::cout << "Motorbike ID: " << motorbike->getID() << ", Parking Duration: " << motorbike->getParkingDuration() << " seconds\n";

    delete car;
    delete bus;
    delete motorbike;

    return 0;
}
