#include <iostream>

int main() {
    int x = 10;
    // Lambda returning a pointer to an integer
    auto returnPointer = [&x]() -> int* {
        return &x;
    };
    std::cout << "Pointer to x: " << returnPointer() << ", Value: " << *returnPointer() << std::endl; // Outputs the address and value of x
    return 0;
}
