#include <iostream>

class MyClass {
public:
    MyClass() { std::cout << "Constructor" << std::endl; }
    MyClass(const MyClass&) { std::cout << "Copy constructor" << std::endl; }
    ~MyClass() { std::cout << "Destructor" << std::endl; }
};

MyClass createObject(bool condition) {
    MyClass obj1, obj2;
    return condition ? obj1 : obj2;  // NRVO may still apply despite conditional return
}

int main() {
    MyClass obj = createObject(true);  // No copy constructor despite multiple return paths
}
