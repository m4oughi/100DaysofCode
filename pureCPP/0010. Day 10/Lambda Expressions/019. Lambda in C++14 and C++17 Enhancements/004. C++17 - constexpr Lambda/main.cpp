#include <iostream>

int main() {
    constexpr auto square = [](int x) {
        return x * x;
    };

    constexpr int result = square(5); // Evaluated at compile-time
    std::cout << "Square of 5: " << result << std::endl; // Outputs: 25

    return 0;
}
