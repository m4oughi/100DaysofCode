#include <iostream>

struct Status {
    unsigned int error  : 1;
    unsigned int ready  : 1;
    unsigned int active : 1;
};

int main() {
    Status deviceStatus = {0b1, 0b0, 0b1}; // Error: ON, Ready: OFF, Active: ON

    std::cout << "Error: " << deviceStatus.error << std::endl;
    std::cout << "Ready: " << deviceStatus.ready << std::endl;
    std::cout << "Active: " << deviceStatus.active << std::endl;

    return 0;
}
