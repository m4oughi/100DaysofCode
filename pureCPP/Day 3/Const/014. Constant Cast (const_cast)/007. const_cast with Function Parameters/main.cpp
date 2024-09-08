#include <iostream>

void processValue(const int* ptr) {
    int* nonConstPtr = const_cast<int*>(ptr); // Removing constness
    *nonConstPtr += 10; // Modifying the value
}

int main() {
    int value = 5;
    processValue(&value);
    std::cout << "value: " << value << std::endl; // Prints 15
}
