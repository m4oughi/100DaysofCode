#include <iostream>
#include <type_traits>

struct SafeMove {
    SafeMove(SafeMove&&) noexcept {}
};

struct RiskyMove {
    RiskyMove(RiskyMove&&) {} // Not noexcept
};

int main() {
    std::cout << std::boolalpha;
    std::cout << "SafeMove is nothrow move constructible: "
              << std::is_nothrow_move_constructible<SafeMove>::value << std::endl;
    std::cout << "RiskyMove is nothrow move constructible: "
              << std::is_nothrow_move_constructible<RiskyMove>::value << std::endl;
    return 0;
}
