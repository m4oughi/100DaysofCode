#include <iostream>
#include <type_traits>

enum class Direction : char { Left = 1, Right = 2 };

template <typename E>
constexpr auto to_int(E e) noexcept {
    static_assert(std::is_enum_v<E>, "Must be an enum");
    return static_cast<std::underlying_type_t<E>>(e);
}

int main() {
    Direction d = Direction::Right;
    std::cout << "Direction value: " << to_int(d) << std::endl;
}
