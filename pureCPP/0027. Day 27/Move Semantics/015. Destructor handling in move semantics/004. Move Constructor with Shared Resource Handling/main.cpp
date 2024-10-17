#include <iostream>
#include <memory>  // For std::shared_ptr

class MyClass {
    std::shared_ptr<int> data;
public:
    MyClass() : data(std::make_shared<int>(10)) {
        std::cout << "Constructor: Shared resource allocated.\n";
    }

    // Move constructor
    MyClass(MyClass&& other) noexcept : data(std::move(other.data)) {
        std::cout << "Move constructor: Shared resource moved.\n";
    }

    ~MyClass() {
        std::cout << "Destructor: Shared resource still alive if others hold it.\n";
    }
};

int main() {
    MyClass obj1;
    MyClass obj2 = std::move(obj1);  // Shared resource ownership transferred
}
