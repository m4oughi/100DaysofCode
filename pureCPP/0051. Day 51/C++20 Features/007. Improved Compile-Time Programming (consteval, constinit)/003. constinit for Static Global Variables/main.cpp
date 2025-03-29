#include <iostream>

constinit int global_value = 42; // Must be initialized at compile-time

int main() {
    std::cout << "Global value: " << global_value << "\n";
    global_value = 100; // Allowed since it's not constexpr
    std::cout << "Updated value: " << global_value << "\n";
}
