#include <iostream>

template <typename T>
class MyClass {
public:
    T data;

    MyClass(const T& d) : data(d) {}

    // Move constructor
    MyClass(MyClass &&other) noexcept : data(std::move(other.data)) {
        std::cout << "Move constructor called for template class" << std::endl;
    }
};

int main() {
    MyClass<int> obj1(100);
    MyClass<int> obj2(std::move(obj1));  // Move constructor transfers templated data
}
