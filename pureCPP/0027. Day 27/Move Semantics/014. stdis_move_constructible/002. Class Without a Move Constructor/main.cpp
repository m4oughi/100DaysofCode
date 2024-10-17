#include <iostream>
#include <type_traits>

class MyClass {
public:
    MyClass() = default;
    MyClass(const MyClass&) = default;  // Copy constructor
    MyClass(MyClass&&) = delete;        // Move constructor is deleted
};

int main() {
    std::cout << std::boolalpha;
    std::cout << "Is MyClass move constructible? "
              << std::is_move_constructible<MyClass>::value << std::endl;
}
