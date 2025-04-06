#include <iostream>
#include <array>

int main() {
    constexpr auto square = [](int x) { return x * x; };
    constexpr std::array<int, 5> squares = {square(1), square(2), square(3), square(4), square(5)};

    for (constexpr int val : squares)
        std::cout << val << " ";

    std::cout << '\n';
}
