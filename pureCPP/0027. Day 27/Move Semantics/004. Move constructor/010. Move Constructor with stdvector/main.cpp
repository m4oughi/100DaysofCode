#include <iostream>
#include <vector>

class MyClass {
public:
    std::vector<int> data;

    MyClass(const std::vector<int>& vec) : data(vec) {}

    // Move constructor
    MyClass(MyClass &&other) noexcept : data(std::move(other.data)) {
        std::cout << "Move constructor called for vector" << std::endl;
    }
};

int main() {
    std::vector<int> vec = {1, 2, 3, 4, 5};
    MyClass obj1(vec);
    MyClass obj2(std::move(obj1));  // Move constructor transfers vector efficiently
}
