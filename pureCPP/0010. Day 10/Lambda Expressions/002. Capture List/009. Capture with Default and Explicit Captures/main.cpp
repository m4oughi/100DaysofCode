#include <iostream>

int main() {
    int x = 5, y = 10, z = 15;
    // Lambda with default capture by value and explicit capture by reference
    auto mixedDefaultCapture = [=, &y]() {
        std::cout << "Captured by value: x = " << x << std::endl;
        std::cout << "Captured by reference: y = " << y << std::endl;
        std::cout << "Captured by value: z = " << z << std::endl;
    };
    y = 20;
    mixedDefaultCapture(); // Outputs x = 5, y = 20, z = 15
    return 0;
}
