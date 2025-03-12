#include <iostream>

int main() {
    auto x = 42;       // Deduces int
    auto y = 3.14;     // Deduces double
    auto z = "Hello";  // Deduces const char*

    std::cout << x << ", " << y << ", " << z << "\n";
    return 0;
}
