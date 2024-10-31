#include <iostream>
#include <typeinfo>

class Vehicle {
    virtual void drive() {}
};

void checkType(Vehicle* vehicle) {
    try {
        std::cout << typeid(*vehicle).name() << std::endl;  // Invalid dereference
    } catch (const std::bad_typeid& e) {
        std::cout << "Caught bad_typeid in function: " << e.what() << std::endl;
    }
}

int main() {
    Vehicle* vehiclePtr = nullptr;
    checkType(vehiclePtr);  // Passing null pointer to function
    return 0;
}
