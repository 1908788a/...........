
#include "ParkingLot.h"

int main() {
    ParkingLot lot(10);
    lot.parkVehicle(new Car(1));
    lot.parkVehicle(new Bus(2));
    lot.parkVehicle(new Motorbike(3));

    lot.unparkVehicle(2); // Unpark the bus

    return 0;
}
