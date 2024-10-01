#include <iostream>

class MyClass {
public:
    MyClass() = default;  // Default constructor
    ~MyClass() = default; // Default destructor
};

int main() {
    MyClass obj;  // Default constructor and destructor are used
    return 0;
}
