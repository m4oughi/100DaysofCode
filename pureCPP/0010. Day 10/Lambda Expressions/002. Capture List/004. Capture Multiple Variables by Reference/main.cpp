#include <iostream>

int main() {
    int a = 5, b = 10;
    // Lambda capturing multiple variables by reference
    auto captureMultipleReferences = [&a, &b]() {
        std::cout << "Captured by reference: a = " << a << ", b = " << b << std::endl;
    };
    a = 15;
    b = 20;
    captureMultipleReferences(); // Outputs the updated values: a = 15, b = 20
    return 0;
}
