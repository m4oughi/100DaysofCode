#include <iostream>
#include <array>
#include <tuple>

int main() {
    auto [x, y, z] = std::make_tuple(1, 2, 3);
    std::array<int, 3> arr = {x, y, z}; // Initialize using structured bindings

    return 0;
}