#include <iostream>
#include <type_traits>  // For std::is_move_constructible

class MyClass {
public:
    MyClass() = default;
    MyClass(MyClass&&) = default;  // Move constructor
};

int main() {
    std::cout << std::boolalpha;
    std::cout << "Is MyClass move constructible? "
              << std::is_move_constructible<MyClass>::value << std::endl;
}
