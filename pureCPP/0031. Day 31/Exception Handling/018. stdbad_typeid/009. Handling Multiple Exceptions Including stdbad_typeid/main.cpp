#include <iostream>
#include <typeinfo>
#include <stdexcept>

class Device {
    virtual void operate() {}
};

int main() {
    try {
        Device* devicePtr = nullptr;
        throw std::runtime_error("General error");
        std::cout << typeid(*devicePtr).name() << std::endl;  // Invalid dereference
    } catch (const std::bad_typeid& e) {
        std::cout << "Caught bad_typeid: " << e.what() << std::endl;
    } catch (const std::runtime_error& e) {
        std::cout << "Caught runtime_error: " << e.what() << std::endl;
    }
    return 0;
}
