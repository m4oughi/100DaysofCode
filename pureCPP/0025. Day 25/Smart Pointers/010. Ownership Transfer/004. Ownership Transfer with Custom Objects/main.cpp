#include <iostream>
#include <memory>

class MyClass {
public:
    MyClass(int x) : value(x) {
        std::cout << "MyClass created with value " << value << std::endl;
    }
    ~MyClass() {
        std::cout << "MyClass destroyed" << std::endl;
    }
    int value;
};

void takeOwnership(std::unique_ptr<MyClass> obj) {
    std::cout << "Function owns object with value: " << obj->value << std::endl;
}

int main() {
    std::unique_ptr<MyClass> uniquePtr = std::make_unique<MyClass>(500);
    takeOwnership(std::move(uniquePtr));  // Transfer ownership

    return 0;
}
