#include <iostream>

class Hardware {
public:
    static const volatile int statusRegister = 0x01; // Mock register address
};

int main() {
    std::cout << Hardware::statusRegister << std::endl; // Prints 1
}
