#include <iostream>

int main() {
    constexpr auto check_even = [](int x) {
        if constexpr (x % 2 == 0) return true;
        else return false;
    };

    constexpr bool is_even = check_even(8);
    std::cout << "Is 8 even? " << std::boolalpha << is_even << '\n';
}
