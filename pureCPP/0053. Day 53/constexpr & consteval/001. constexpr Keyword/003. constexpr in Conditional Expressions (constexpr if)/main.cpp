#include <iostream>

constexpr bool is_even(int n) {
    return (n % 2 == 0);
}

int main() {
    if constexpr (is_even(10)) {
        std::cout << "10 is even\n";
    } else {
        std::cout << "10 is odd\n";
    }
    return 0;
}
