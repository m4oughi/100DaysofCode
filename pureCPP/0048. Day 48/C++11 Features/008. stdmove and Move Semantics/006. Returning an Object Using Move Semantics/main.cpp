#include <iostream>
#include <utility>

class MyClass {
public:
    MyClass() { std::cout << "Constructor\n"; }
    MyClass(MyClass&&) noexcept { std::cout << "Move Constructor\n"; }
};

MyClass createObject() {
    MyClass obj;
    return obj; // Move constructor may be invoked (RVO applies)
}

int main() {
    MyClass newObj = createObject();
    return 0;
}
