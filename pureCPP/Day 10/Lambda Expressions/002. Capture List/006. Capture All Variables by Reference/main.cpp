#include <iostream>

int main() {
    int x = 5, y = 10;
    // Lambda capturing all local variables by reference using [&]
    auto captureAllByReference = [&]() {
        std::cout << "Captured by reference: x = " << x << ", y = " << y << std::endl;
    };
    x = 15;
    y = 20;
    captureAllByReference(); // Outputs the updated values: x = 15, y = 20
    return 0;
}
