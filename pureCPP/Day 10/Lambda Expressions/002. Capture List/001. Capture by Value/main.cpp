#include <iostream>

int main() {
    int x = 10;
    // Lambda capturing 'x' by value
    auto captureValue = [x]() {
        std::cout << "Captured by value: x = " << x << std::endl;
    };
    x = 20; // Change x outside the lambda
    captureValue(); // Output will still show x = 10
    return 0;
}
