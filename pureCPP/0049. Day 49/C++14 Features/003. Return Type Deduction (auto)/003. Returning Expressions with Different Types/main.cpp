#include <iostream>

auto divide(int a, double b) {
    return a / b; // Deduces double
}

int main() {
    std::cout << "Division: " << divide(10, 3.0) << std::endl;
    return 0;
}
