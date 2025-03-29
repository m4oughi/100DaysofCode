#include <iostream>

int main() {
    auto multiply = []<typename T>(T a, T b) { return a * b; };

    std::cout << "Float: " << multiply(2.5f, 3.0f) << "\n";
    std::cout << "Int: " << multiply(4, 5) << "\n";
}
