
#include "ParkingLot.h"

int main() {
    ParkingLot lot(10);

    lot.parkVehicle(new Car(1));
    lot.parkVehicle(new Bus(2));
    lot.parkVehicle(new Motorbike(3));
;

    int overstayedThreshold = 15; // Example threshold
    std::cout << "Overstayed vehicles: " << lot.countOverstayingVehicles(overstayedThreshold) << std::endl;

    return 0;
}
