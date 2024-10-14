#include <iostream>

int main() {
    int* ptr = new int(10);  // Dynamically allocated memory
    std::cout << "Value: " << *ptr << std::endl;

    // Memory leak! Forgot to delete ptr
    return 0;
}
