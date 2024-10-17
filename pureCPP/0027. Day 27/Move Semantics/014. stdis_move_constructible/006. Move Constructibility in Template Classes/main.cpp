#include <iostream>
#include <type_traits>

template <typename T>
class MyClass {
    T value;
public:
    MyClass() = default;

    // Move constructor
    MyClass(MyClass&&) noexcept = default;
};

int main() {
    std::cout << std::boolalpha;
    std::cout << "Is MyClass<int> move constructible? "
              << std::is_move_constructible<MyClass<int>>::value << std::endl;

    std::cout << "Is MyClass<void> move constructible? "
              << std::is_move_constructible<MyClass<void>>::value << std::endl;
}
