#include <iostream>

class Example {
public:
    Example() { std::cout << "Example Constructor\n"; }
    ~Example() { std::cout << "Example Destructor\n"; }
};

Example createExample() {
    Example ex; // Named local variable
    return ex;  // Guaranteed copy elision in C++17
}

int main() {
    Example ex = createExample();
    return 0;
}
