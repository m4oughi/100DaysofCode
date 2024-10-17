#include <iostream>

class SimpleClass {
public:
    SimpleClass() { std::cout << "Constructor" << std::endl; }
    ~SimpleClass() { std::cout << "Destructor" << std::endl; }
};

int main() {
    SimpleClass obj;  // Calls constructor and destructor automatically
}
