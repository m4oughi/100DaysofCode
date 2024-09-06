#include <iostream>

int globalValue = 90;

int& getGlobalValue() {
    return globalValue;  // Return reference to global variable
}

int main() {
    int& ref = getGlobalValue();
    ref = 100;  // Modify global variable through reference

    std::cout << "Global value: " << globalValue << std::endl;  // Output: 100

    return 0;
}
