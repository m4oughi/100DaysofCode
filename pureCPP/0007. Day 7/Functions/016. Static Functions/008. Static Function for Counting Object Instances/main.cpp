#include <iostream>

class Vehicle {
private:
    static int vehicleCount;

public:
    Vehicle() {
        vehicleCount++;
    }

    ~Vehicle() {
        vehicleCount--;
    }

    static int getVehicleCount() {
        return vehicleCount;
    }
};

// Initialize static variable
int Vehicle::vehicleCount = 0;

int main() {
    Vehicle v1, v2;
    std::cout << "Number of vehicles: " << Vehicle::getVehicleCount() << std::endl;

    {
        Vehicle v3;
        std::cout << "Number of vehicles: " << Vehicle::getVehicleCount() << std::endl;
    }

    std::cout << "Number of vehicles after v3 destruction: " << Vehicle::getVehicleCount() << std::endl;

    return 0;
}
