#include <iostream>

struct MyClass {
    int x;
};

MyClass createObject() {
    return {42};  // Aggregate initialization with guaranteed copy elision in C++17
}

int main() {
    MyClass obj = createObject();  // No copy, elision is guaranteed
    std::cout << "obj.x = " << obj.x << std::endl;
}
