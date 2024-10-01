#include <iostream>

class MyClass {
public:
    int value;

    // Inline constructor
    MyClass(int v) : value(v) {
        std::cout << "Inline constructor called with value: " << value << std::endl;
    }
};

int main() {
    MyClass obj(10);  // Calls inline constructor
    return 0;
}
