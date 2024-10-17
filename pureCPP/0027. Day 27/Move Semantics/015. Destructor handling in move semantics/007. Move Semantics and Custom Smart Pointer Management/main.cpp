#include <iostream>

class MyClass {
    std::unique_ptr<int> data;  // Unique ownership of resource
public:
    MyClass() : data(std::make_unique<int>(50)) {
        std::cout << "Constructor: Allocating resource via unique_ptr.\n";
    }

    MyClass(MyClass&& other) noexcept = default;  // Default move constructor

    ~MyClass() {
        std::cout << "Destructor: Resource automatically released by unique_ptr.\n";
    }
};

int main() {
    MyClass obj1;
    MyClass obj2 = std::move(obj1);  // Calls move constructor, transfers ownership of unique_ptr
}
