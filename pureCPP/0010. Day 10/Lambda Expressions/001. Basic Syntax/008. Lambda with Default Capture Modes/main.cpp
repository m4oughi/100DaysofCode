#include <iostream>

int main() {
    int a = 5, b = 10;
    // Lambda with default capture by value
    auto captureByValue = [=]() {
        std::cout << "Default capture by value: a = " << a << ", b = " << b << std::endl;
    };
    captureByValue();

    // Lambda with default capture by reference
    auto captureByReference = [&]() {
        a = 20; b = 40;
        std::cout << "Default capture by reference: a = " << a << ", b = " << b << std::endl;
    };
    captureByReference();

    return 0;
}
