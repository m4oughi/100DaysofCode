#include <iostream>

consteval bool is_even(int n) {
    return (n % 2 == 0);
}

int main() {
    constexpr bool result = is_even(10);
    std::cout << (result ? "Even" : "Odd") << '\n';
    return 0;
}
