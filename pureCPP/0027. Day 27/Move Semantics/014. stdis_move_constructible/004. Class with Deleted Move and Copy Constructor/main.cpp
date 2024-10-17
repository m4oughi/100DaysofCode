#include <iostream>
#include <type_traits>

class MyClass {
public:
    MyClass() = default;
    
    MyClass(const MyClass&) = delete;  // Deleted copy constructor
    MyClass(MyClass&&) = delete;       // Deleted move constructor
};

int main() {
    std::cout << std::boolalpha;
    std::cout << "Is MyClass move constructible? "
              << std::is_move_constructible<MyClass>::value << std::endl;
}
