#include "Bus.h"

int Bus::getParkingDuration() const {
    return static_cast<int>(Vehicle::getParkingDuration() * 0.75); // 25% reduction
}
