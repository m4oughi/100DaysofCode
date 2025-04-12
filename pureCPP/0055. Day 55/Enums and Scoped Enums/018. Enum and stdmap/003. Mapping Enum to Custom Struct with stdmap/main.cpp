#include <iostream>
#include <map>
#include <string>

enum class VehicleType {
    Car,
    Truck,
    Motorcycle
};

struct VehicleInfo {
    std::string brand;
    int wheels;
};

int main() {
    std::map<VehicleType, VehicleInfo> vehicleMap;

    // Mapping VehicleType to custom struct
    vehicleMap[VehicleType::Car] = {"Toyota", 4};
    vehicleMap[VehicleType::Truck] = {"Ford", 6};
    vehicleMap[VehicleType::Motorcycle] = {"Harley-Davidson", 2};

    // Accessing the mapped struct data
    std::cout << "Car brand: " << vehicleMap[VehicleType::Car].brand << ", Wheels: " << vehicleMap[VehicleType::Car].wheels << "\n";
    std::cout << "Truck brand: " << vehicleMap[VehicleType::Truck].brand << ", Wheels: " << vehicleMap[VehicleType::Truck].wheels << "\n";
    std::cout << "Motorcycle brand: " << vehicleMap[VehicleType::Motorcycle].brand << ", Wheels: " << vehicleMap[VehicleType::Motorcycle].wheels << "\n";

    return 0;
}
