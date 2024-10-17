#include <iostream>
#include <utility>

class MyClass {
public:
    MyClass() {}

    MyClass(MyClass&&) noexcept {
        std::cout << "Move constructor" << std::endl;
    }

    MyClass(const MyClass&) {
        std::cout << "Copy constructor" << std::endl;
    }
};

int main() {
    MyClass obj;
    MyClass obj2 = std::move_if_noexcept(obj);  // Calls move constructor if noexcept, otherwise copy constructor
}
