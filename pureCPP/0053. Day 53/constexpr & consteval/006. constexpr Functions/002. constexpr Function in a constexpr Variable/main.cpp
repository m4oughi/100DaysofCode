#include <iostream>

constexpr int square(int x) {
    return x * x;
}

constexpr int value = square(4);  // Evaluated at compile-time

int main() {
    std::cout << "Square of 4: " << value << '\n';
    return 0;
}
