#include <iostream>

int main() {
    // Lambda with explicit return type
    auto divide = [](int a, int b) -> double {
        return static_cast<double>(a) / b;
    };
    std::cout << "Division: " << divide(10, 3) << std::endl;
    return 0;
}
