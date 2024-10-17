#include <iostream>
#include <vector>

class MyClass {
public:
    int *data;

    MyClass(int d) : data(new int(d)) {}

    // Move constructor
    MyClass(MyClass &&other) noexcept : data(other.data) {
        other.data = nullptr;
        std::cout << "Move constructor called" << std::endl;
    }

    ~MyClass() {
        delete data;
    }
};

int main() {
    std::vector<MyClass> vec;
    vec.push_back(MyClass(10));  // Calls move constructor when adding a temporary object
}
