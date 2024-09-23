#include <iostream>

int main() {
    int x = 5, y = 10;
    // Lambda capturing all local variables by value using [=]
    auto captureAllByValue = [=]() {
        std::cout << "Captured by value: x = " << x << ", y = " << y << std::endl;
    };
    x = 15;
    y = 20;
    captureAllByValue(); // Outputs the original values: x = 5, y = 10
    return 0;
}
