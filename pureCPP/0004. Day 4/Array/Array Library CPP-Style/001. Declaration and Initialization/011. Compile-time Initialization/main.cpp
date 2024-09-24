#include <iostream>
#include <array>

constexpr std::array<int, 5> createArray() {
    return {1, 2, 3, 4, 5};
}

int main() {
    constexpr auto arr = createArray(); // Compile-time initialization

    return 0;
}