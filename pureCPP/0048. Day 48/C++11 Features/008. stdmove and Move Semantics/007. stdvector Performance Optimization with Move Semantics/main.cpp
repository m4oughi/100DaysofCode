#include <iostream>
#include <vector>
#include <utility>

class MyClass {
public:
    MyClass() { std::cout << "Constructor\n"; }
    MyClass(const MyClass&) { std::cout << "Copy Constructor\n"; }
    MyClass(MyClass&&) noexcept { std::cout << "Move Constructor\n"; }
};

int main() {
    std::vector<MyClass> vec;
    vec.reserve(3); // Avoid reallocation

    std::cout << "Pushing temporary object:\n";
    vec.push_back(MyClass()); // Move constructor is preferred

    return 0;
}
