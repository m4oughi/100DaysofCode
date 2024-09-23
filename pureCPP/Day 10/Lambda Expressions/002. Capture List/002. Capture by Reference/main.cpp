#include <iostream>

int main() {
    int x = 10;
    // Lambda capturing 'x' by reference
    auto captureReference = [&x]() {
        std::cout << "Captured by reference: x = " << x << std::endl;
    };
    x = 20; // Change x outside the lambda
    captureReference(); // Output will show x = 20
    return 0;
}
