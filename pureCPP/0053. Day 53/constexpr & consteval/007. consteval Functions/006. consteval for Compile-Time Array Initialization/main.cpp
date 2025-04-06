#include <iostream>
#include <array>

consteval std::array<int, 5> generateArray() {
    return {1, 2, 3, 4, 5};
}

int main() {
    constexpr auto arr = generateArray();

    for (int val : arr) {
        std::cout << val << " ";
    }
    std::cout << '\n';
    return 0;
}
