#include <iostream>
#include <utility>

class MyClass {
public:
    MyClass(int val) {
        std::cout << "MyClass constructor with value: " << val << std::endl;
    }
};

template <typename T>
MyClass createObject(T&& val) {
    return MyClass(std::forward<T>(val));  // Perfect forwarding to constructor
}

int main() {
    int x = 10;
    createObject(x);           // Lvalue is forwarded
    createObject(20);          // Rvalue is forwarded
}
