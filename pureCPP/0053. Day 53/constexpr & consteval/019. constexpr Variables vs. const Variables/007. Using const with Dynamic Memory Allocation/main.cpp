#include <iostream>

int main() {
    const int* ptr = new int(42);  // Allocated at runtime
    std::cout << "Dynamically allocated const value: " << *ptr << '\n';
    delete ptr;  // Clean up dynamically allocated memory
}
