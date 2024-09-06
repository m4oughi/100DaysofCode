#include <iostream>

void processValue(int& value) {
    std::cout << "Processing value: " << value << std::endl;
}

int main() {
    // int& ref = nullptr; // Error: nullptr cannot be assigned to a reference

    return 0;
}
