#include <iostream>

int main() {
    // Lambda with auto return type (C++14)
    auto calculate = [](int a, int b) -> auto {
        return (a + b) * 1.5; // Deduces return type as double
    };
    std::cout << "Calculation: " << calculate(4, 6) << std::endl; // Outputs: Calculation: 15
    return 0;
}
