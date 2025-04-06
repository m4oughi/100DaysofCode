#include <iostream>

int main() {
    constexpr auto add = [](auto a, auto b) { return a + b; };

    constexpr int sum1 = add(10, 20);
    constexpr double sum2 = add(5.5, 4.5);

    std::cout << "10 + 20 = " << sum1 << '\n';
    std::cout << "5.5 + 4.5 = " << sum2 << '\n';
}
