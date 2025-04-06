#include <iostream>

constexpr int globalValue = 42;  // ✅ Compile-time constant

int main() {
    std::cout << "Global constant: " << globalValue << '\n';
}
