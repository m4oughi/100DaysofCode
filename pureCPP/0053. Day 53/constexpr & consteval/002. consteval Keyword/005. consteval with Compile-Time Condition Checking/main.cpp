#include <iostream>

consteval bool is_even(int n) {
    return (n % 2 == 0);
}

int main() {
    constexpr bool check = is_even(10); // Evaluated at compile-time
    std::cout << (check ? "Even" : "Odd") << '\n';
    return 0;
}
