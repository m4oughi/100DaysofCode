#include <iostream>

template <typename... Args>
constexpr auto sum(Args... args) {
    return (args + ...);  // Fold expression
}

int main() {
    constexpr int result = sum(1, 2, 3, 4, 5);
    std::cout << "Sum: " << result << std::endl;
    return 0;
}
