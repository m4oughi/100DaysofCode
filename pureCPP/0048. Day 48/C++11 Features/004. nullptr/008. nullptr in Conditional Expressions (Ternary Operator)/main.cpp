#include <iostream>

int main() {
    int* ptr = nullptr;
    int value = 42;
    
    int* result = (ptr != nullptr) ? ptr : &value; // Choose valid pointer

    std::cout << "Result points to: " << *result << std::endl;

    return 0;
}
