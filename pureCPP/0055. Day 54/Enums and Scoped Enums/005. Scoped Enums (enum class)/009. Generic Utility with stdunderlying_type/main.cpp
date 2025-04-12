#include <iostream>
#include <type_traits>

enum class Priority : unsigned char { Low = 1, Medium = 2, High = 3 };

template<typename E>
constexpr auto to_underlying(E e) noexcept {
    return static_cast<std::underlying_type_t<E>>(e);
}

int main() {
    Priority p = Priority::High;
    std::cout << "Numeric value: " << to_underlying(p) << std::endl;
}
