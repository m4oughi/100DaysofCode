#include <iostream>

int main() {
    int a = 5, b = 10;
    // Lambda that captures 'a' and 'b' by reference
    auto captureByReference = [&a, &b]() {
        a = 20;
        b = 40;
        std::cout << "Modified values inside lambda: a = " << a << ", b = " << b << std::endl;
    };
    captureByReference();
    std::cout << "Modified values outside lambda: a = " << a << ", b = " << b << std::endl;
    return 0;
}
