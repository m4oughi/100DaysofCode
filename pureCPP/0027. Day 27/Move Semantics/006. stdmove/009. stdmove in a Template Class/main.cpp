#include <iostream>
#include <utility>

template <typename T>
class MyClass {
public:
    T data;

    MyClass(const T& d) : data(d) {}

    MyClass(T&& d) noexcept : data(std::move(d)) {}

    MyClass& operator=(T&& other) noexcept {
        data = std::move(other);
        return *this;
    }
};

int main() {
    std::string str = "Hello";
    MyClass<std::string> obj1(str);             // Calls copy constructor
    MyClass<std::string> obj2(std::move(str));  // Calls move constructor
}
