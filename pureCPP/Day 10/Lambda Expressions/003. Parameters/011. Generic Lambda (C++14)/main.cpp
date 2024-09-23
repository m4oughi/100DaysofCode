#include <iostream>

int main() {
    // Generic lambda that accepts any type of parameters
    auto generic = [](auto x, auto y) {
        std::cout << "x = " << x << ", y = " << y << std::endl;
    };
    generic(5, 3.14);     // Outputs x = 5, y = 3.14
    generic("Hello", 7);  // Outputs x = Hello, y = 7
    return 0;
}
