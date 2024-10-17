#include <iostream>
#include <type_traits>

class NonMovable {
public:
    NonMovable() = default;
    NonMovable(NonMovable&&) = delete;  // Deleted move constructor
};

class MyClass {
    NonMovable nm;  // Member that cannot be moved
public:
    MyClass() = default;
    MyClass(MyClass&&) = default;  // This will not compile because NonMovable can't be moved
};

int main() {
    std::cout << std::boolalpha;
    std::cout << "Is MyClass move constructible? "
              << std::is_move_constructible<MyClass>::value << std::endl;
}
