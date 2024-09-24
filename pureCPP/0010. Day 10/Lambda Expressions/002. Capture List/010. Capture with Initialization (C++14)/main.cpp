#include <iostream>

int main() {
    int x = 5;
    // Lambda with capture and initialization of new variables
    auto captureWithInit = [y = x + 1]() {
        std::cout << "Initialized and captured variable: y = " << y << std::endl;
    };
    captureWithInit(); // Outputs y = 6
    return 0;
}
