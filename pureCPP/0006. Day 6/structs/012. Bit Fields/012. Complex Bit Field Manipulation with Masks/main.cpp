#include <iostream>

struct DeviceStatus {
    unsigned int power : 1;
    unsigned int connection : 1;
    unsigned int error : 1;
    unsigned int battery : 5;
};

int main() {
    DeviceStatus status = {1, 1, 0, 25};  // power = 1, connection = 1, error = 0, battery = 25

    // Print individual status bits
    std::cout << "Power: " << status.power << ", Connection: " << status.connection
              << ", Error: " << status.error << ", Battery: " << status.b
