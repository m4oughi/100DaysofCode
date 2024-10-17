#include <iostream>
#include <type_traits>

class MyClass {
    int* data;
public:
    MyClass() : data(new int(0)) {}
    
    // Custom move constructor
    MyClass(MyClass&& other) noexcept {
        data = other.data;
        other.data = nullptr;
    }

    ~MyClass() { delete data; }
};

int main() {
    std::cout << std::boolalpha;
    std::cout << "Is MyClass move constructible? "
              << std::is_move_constructible<MyClass>::value << std::endl;
}
