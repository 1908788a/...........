
#include "ParkingLot.h"
#include <iostream>

ParkingLot::ParkingLot(int cap) : capacity(cap) {}

ParkingLot::~ParkingLot() {
    for (auto vehicle : vehicles) {
        delete vehicle;
    }
}

bool ParkingLot::parkVehicle(Vehicle* v) {
    if (vehicles.size() < capacity) {
        vehicles.push_back(v);
        return true;
    } else {
        std::cout << "The lot is full!" << std::endl;
        return false;
    }
}

void ParkingLot::unparkVehicle(int id) {
    for (auto it = vehicles.begin(); it != vehicles.end(); ++it) {
        if ((*it)->getID() == id) {
            delete *it;
            vehicles.erase(it);
            return;
        }
    }
    std::cout << "Vehicle not in the lot" << std::endl;
}
