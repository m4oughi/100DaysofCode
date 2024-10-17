#include <iostream>

template <typename T>
class MyClass {
public:
    T data;

    MyClass(const T& d) : data(d) {}

    // Move assignment operator
    MyClass& operator=(MyClass &&other) noexcept {
        if (this != &other) {
            data = std::move(other.data);
            std::cout << "Move assignment operator for template class" << std::endl;
        }
        return *this;
    }
};

int main() {
    MyClass<int> obj1(100);
    MyClass<int> obj2(200);
    obj2 = std::move(obj1);  // Move assignment transfers templated data
}
