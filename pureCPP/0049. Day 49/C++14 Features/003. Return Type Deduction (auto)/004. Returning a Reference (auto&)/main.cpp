#include <iostream>

int globalValue = 100;

auto& getGlobalValue() {
    return globalValue; // Returns reference
}

int main() {
    getGlobalValue() = 200; // Modifies globalValue
    std::cout << "Global Value: " << globalValue << std::endl;
    return 0;
}
