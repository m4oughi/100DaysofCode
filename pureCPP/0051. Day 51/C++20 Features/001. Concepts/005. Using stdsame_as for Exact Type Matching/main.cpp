#include <iostream>
#include <concepts>

// Concept ensuring type is exactly `int`
template <typename T>
concept IsInt = std::same_as<T, int>;

void process(IsInt auto x) {
    std::cout << "Processing int: " << x << '\n';
}

int main() {
    process(42);   // ✅ Works
    // process(42.0); // ❌ Compilation Error: double is not int
}
