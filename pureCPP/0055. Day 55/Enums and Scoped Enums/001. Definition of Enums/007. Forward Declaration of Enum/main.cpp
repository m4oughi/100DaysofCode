#include <iostream>

enum VehicleType; // Forward declaration

enum VehicleType { Car, Truck, Motorcycle };

int main() {
    VehicleType myVehicle = Car;
    std::cout << "My vehicle is a car.\n";
}
