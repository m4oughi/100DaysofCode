#include <iostream>

int main() {
    int a = 5, b = 10;
    // Lambda with reference parameters
    auto modifyValues = [](int& x, int& y) {
        x += 5;
        y += 10;
    };
    modifyValues(a, b);
    std::cout << "Modified values: a = " << a << ", b = " << b << std::endl; // Outputs a = 10, b = 20
    return 0;
}
