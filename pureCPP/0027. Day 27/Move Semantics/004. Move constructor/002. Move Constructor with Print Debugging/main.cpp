#include <iostream>

class MyClass {
public:
    int *data;

    MyClass(int d) : data(new int(d)) {}

    // Move constructor
    MyClass(MyClass &&other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "Move constructor called, data moved: " << *data << std::endl;
    }

    ~MyClass() {
        if (data != nullptr) {
            std::cout << "Destructor called, data: " << *data << std::endl;
        }
        delete data;
    }
};

int main() {
    MyClass obj1(100);
    MyClass obj2(std::move(obj1));  // Move constructor transfers obj1's data to obj2
}
