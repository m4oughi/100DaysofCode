#include <iostream>

class HardwareRegister {
public:
    static const volatile int registerValue = 0xDEADBEEF; // Mock address
};

int main() {
    std::cout << HardwareRegister::registerValue << std::endl; // Prints 3735928559
}
