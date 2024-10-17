#include <iostream>
#include <string>

class MyClass {
public:
    std::string data;

    MyClass(const std::string& str) : data(str) {}

    // Move constructor
    MyClass(MyClass &&other) noexcept : data(std::move(other.data)) {
        std::cout << "Move constructor called for large string" << std::endl;
    }
};

int main() {
    std::string largeString = "A very large string";
    MyClass obj1(largeString);
    MyClass obj2(std::move(obj1));  // Move constructor avoids copying large string
}
