#include <iostream>

int main() {
    int a = 10, b = 20;
    auto swap = [&a, &b]() {
        int temp = a;
        a = b;
        b = temp;
    };

    swap();
    std::cout << "After swap, a: " << a << ", b: " << b << std::endl; // Outputs: After swap, a: 20, b: 10
    return 0;
}
