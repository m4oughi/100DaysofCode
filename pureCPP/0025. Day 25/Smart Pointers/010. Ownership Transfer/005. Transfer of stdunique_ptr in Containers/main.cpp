#include <iostream>
#include <memory>
#include <vector>

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

int main() {
    std::vector<std::unique_ptr<MyClass>> vec;
    vec.push_back(std::make_unique<MyClass>(10));  // Transfer ownership to vector

    std::unique_ptr<MyClass> extracted = std::move(vec[0]);  // Transfer ownership out
    vec.pop_back();  // Remove element from vector (now empty)

    std::cout << "Extracted object has value: " << extracted->value << std::endl;

    return 0;
}
