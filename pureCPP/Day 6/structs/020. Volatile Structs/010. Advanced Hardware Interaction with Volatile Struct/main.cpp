#include <iostream>

struct HardwareRegister {
    volatile unsigned char control;  // Volatile register for control bits
    volatile unsigned char status;   // Volatile register for status bits

    HardwareRegister() : control(0), status(0) {}

    void writeControl(unsigned char value) {
        control = value;  // Writing to volatile control register
    }

    void readStatus() const {
        std::cout << "Status: " << static_cast<int>(status) << std::endl;
    }
};

int main() {
    volatile HardwareRegister reg;  // Entire struct is volatile

    reg.writeControl(0xFF);  // Writing to volatile control register
    reg.readStatus();        // Reading volatile status register
    return 0;
}
