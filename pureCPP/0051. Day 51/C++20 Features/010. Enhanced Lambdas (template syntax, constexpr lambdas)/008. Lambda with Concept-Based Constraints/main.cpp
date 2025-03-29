#include <iostream>
#include <concepts>

auto add = []<std::integral T>(T a, T b) { return a + b; };

int main() {
    std::cout << "Int: " << add(4, 5) << "\n";
    // std::cout << "Double: " << add(2.5, 3.5); // ❌ Error: Not an integral type
}
