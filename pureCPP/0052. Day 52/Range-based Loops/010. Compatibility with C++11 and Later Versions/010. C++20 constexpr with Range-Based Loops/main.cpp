#include <iostream>
#include <array>

constexpr std::array<int, 5> getNumbers() {
    return {1, 2, 3, 4, 5};
}

int main() {
    constexpr auto numbers = getNumbers();

    for (int num : numbers) { // C++20 allows constexpr loops
        std::cout << num << " ";
    }

    return 0;
}
