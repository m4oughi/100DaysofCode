#include <iostream>

namespace MyNamespace {
    class MyClass {
    public:
        void greet() {
            std::cout << "Hello from MyClass in MyNamespace!" << std::endl;
        }
    };
}

int main() {
    MyNamespace::MyClass obj; // Creating an object of MyClass
    obj.greet();             // Accessing the class method
    return 0;
}
