#include <iostream>

class Example {
public:
    Example() { std::cout << "Example Constructor\n"; }
    ~Example() { std::cout << "Example Destructor\n"; }
};

Example createExample() {
    return Example(); // Guaranteed copy elision in C++17
}

int main() {
    Example ex = createExample();
    return 0;
}
