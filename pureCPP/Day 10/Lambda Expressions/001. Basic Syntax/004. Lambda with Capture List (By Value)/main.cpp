#include <iostream>

int main() {
    int a = 5, b = 10;
    // Lambda that captures 'a' and 'b' by value
    auto captureByValue = [a, b]() {
        std::cout << "Captured values: a = " << a << ", b = " << b << std::endl;
    };
    captureByValue();
    return 0;
}
