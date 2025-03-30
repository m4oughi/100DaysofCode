#include <iostream>
#include <array>

constexpr std::array<int, 3> getArray() {
    return {10, 20, 30};
}

int main() {
    constexpr auto numbers = getArray();

    for (int num : numbers) { // C++17 allows constexpr in loops
        std::cout << num << " ";
    }

    return 0;
}
