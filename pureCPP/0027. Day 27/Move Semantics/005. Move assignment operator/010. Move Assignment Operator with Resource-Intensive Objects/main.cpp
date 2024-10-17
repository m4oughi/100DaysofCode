#include <iostream>
#include <string>

class MyClass {
public:
    std::string data;

    MyClass(const std::string& str) : data(str) {}

    // Move assignment operator
    MyClass& operator=(MyClass &&other) noexcept {
        if (this != &other) {
            data = std::move(other.data);  // Efficiently move large string
            std::cout << "Move assignment for large string" << std::endl;
        }
        return *this;
    }
};

int main() {
    std::string largeString = "A very large string";
    MyClass obj1(largeString);
    MyClass obj2("Another string");
    obj2 = std::move(obj1);  // Efficiently transfers large string
}
