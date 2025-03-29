#include <iostream>
#include <array>

consteval std::array<int, 10> generate_lookup_table() {
    std::array<int, 10> table{};
    for (int i = 0; i < 10; ++i) {
        table[i] = i * i; // Precompute squares
    }
    return table;
}

constinit std::array<int, 10> lookup_table = generate_lookup_table(); // Ensured at compile-time

int main() {
    for (int i = 0; i < 10; ++i) {
        std::cout << "Square of " << i << " is " << lookup_table[i] << "\n";
    }
}
