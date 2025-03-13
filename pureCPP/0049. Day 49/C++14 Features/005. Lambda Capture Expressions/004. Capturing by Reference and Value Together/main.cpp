#include <iostream>

int main() {
    int a = 10, b = 20;

    auto lambda = [x = a, &y = b]() {
        std::cout << "x: " << x << ", y: " << y << std::endl;
        y += 10; // Modifies b in main scope
    };

    lambda();  // Output: x: 10, y: 20
    lambda();  // Output: x: 10, y: 30

    std::cout << "Final b: " << b << std::endl; // Output: Final b: 30

    return 0;
}
