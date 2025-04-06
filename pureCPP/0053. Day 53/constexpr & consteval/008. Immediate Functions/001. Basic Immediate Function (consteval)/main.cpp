#include <iostream>

consteval int square(int x) {
    return x * x;
}

int main() {
    constexpr int result = square(4); // OK, evaluated at compile-time
    std::cout << "4 squared = " << result << '\n';
    return 0;
}
