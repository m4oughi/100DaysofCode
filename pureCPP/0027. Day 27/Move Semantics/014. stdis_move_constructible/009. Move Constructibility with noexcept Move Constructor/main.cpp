#include <iostream>
#include <type_traits>

class MyClass {
public:
    MyClass() = default;

    // Move constructor marked as noexcept
    MyClass(MyClass&&) noexcept { std::cout << "Move constructor (noexcept)\n"; }
};

int main() {
    std::cout << std::boolalpha;
    std::cout << "Is MyClass move constructible? "
              << std::is_move_constructible<MyClass>::value << std::endl;

    std::cout << "Is MyClass noexcept move constructible? "
              << std::is_nothrow_move_constructible<MyClass>::value << std::endl;
}
