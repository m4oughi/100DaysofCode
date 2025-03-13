#include <iostream>

template <typename T, typename U>
auto addValues(T a, U b) {
    return a + b; // Deduces based on expression
}

int main() {
    std::cout << "Sum: " << addValues(10, 2.5) << std::endl; // Returns double
    return 0;
}
