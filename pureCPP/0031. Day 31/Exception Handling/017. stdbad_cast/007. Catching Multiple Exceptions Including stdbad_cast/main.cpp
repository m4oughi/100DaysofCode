#include <iostream>
#include <typeinfo>
#include <stdexcept>

class Vehicle {
    virtual void drive() {}
};

class Truck : public Vehicle {};

int main() {
    try {
        Vehicle* vehiclePtr = new Truck();
        throw std::runtime_error("General error");
        Truck* truckPtr = dynamic_cast<Truck*>(vehiclePtr);  // Valid cast
    } catch (const std::bad_cast& e) {
        std::cout << "Caught bad_cast: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Caught runtime_error: " << e.what() << std::endl;
    }
    return 0;
}
