#include <iostream>

class MyClass {
public:
    MyClass() = default;

    // Move constructor marked as noexcept
    MyClass(MyClass&&) noexcept {
        std::cout << "Move constructor (noexcept)." << std::endl;
    }
};

int main() {
    MyClass obj1;
    MyClass obj2 = std::move(obj1);  // Move operation, noexcept guarantees it won't throw

    return 0;
}
