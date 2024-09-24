#include <iostream>

constexpr int getConstant() {
    return 200;
}

int main() {
    constexpr auto lambda = []() constexpr -> int {
        return getConstant();
    };

    std::cout << "Constant value from constexpr lambda: " << lambda() << std::endl; // Prints 200
}
