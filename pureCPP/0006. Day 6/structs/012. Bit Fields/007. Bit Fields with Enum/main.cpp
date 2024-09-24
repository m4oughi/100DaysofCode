#include <iostream>

enum class Status : unsigned int {
    OFF = 0,
    ON = 1
};

struct Device {
    unsigned int id : 8;
    Status status : 1;  // 1-bit field for status
};

int main() {
    Device d;
    d.id = 255;
    d.status = Status::ON;
    
    std::cout << "Device ID: " << d.id << ", Status: " << (d.status == Status::ON ? "ON" : "OFF") << std::endl;
}
