#include <iostream>

template <typename... Args>
auto multiply(Args... args) {
    return (... * args);  // Unary left fold
}

int main() {
    std::cout << "Product: " << multiply(2, 3, 4) << '\n';
    return 0;
}
