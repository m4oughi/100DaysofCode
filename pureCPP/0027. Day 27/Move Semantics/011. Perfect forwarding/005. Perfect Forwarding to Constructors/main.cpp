#include <iostream>

class MyClass {
public:
    MyClass(const std::string& s) { std::cout << "Lvalue constructor: " << s << std::endl; }
    MyClass(std::string&& s) { std::cout << "Rvalue constructor: " << s << std::endl; }

    template <typename T>
    MyClass(T&& s) : MyClass(std::forward<T>(s)) {}  // Perfect forwarding to constructor
};

int main() {
    std::string name = "John";
    MyClass obj1(name);         // Calls lvalue constructor
    MyClass obj2("Doe");        // Calls rvalue constructor
}
