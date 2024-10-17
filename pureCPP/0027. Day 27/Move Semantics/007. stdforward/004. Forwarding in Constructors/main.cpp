#include <iostream>
#include <utility>

class MyClass {
public:
    template <typename T>
    MyClass(T&& val) {
        set(std::forward<T>(val));
    }

    void set(int& x) {
        std::cout << "Setting lvalue: " << x << std::endl;
    }

    void set(int&& x) {
        std::cout << "Setting rvalue: " << x << std::endl;
    }
};

int main() {
    int a = 10;
    MyClass obj1(a);        // Calls set(int&)
    MyClass obj2(20);       // Calls set(int&&)
}
