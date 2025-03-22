#include <iostream>

template <typename... Args>
auto sum(Args... args) {
    return (args + ...);  // Unary right fold
}

int main() {
    std::cout << "Sum: " << sum(1, 2, 3, 4, 5) << '\n';
    return 0;
}
