#include <iostream>

struct MyStruct {
    int value;

    // Inline constructor
    MyStruct(int v) : value(v) {
        std::cout << "Inline constructor called with value: " << value << std::endl;
    }

    // Inline destructor
    ~MyStruct() {
        std::cout << "Inline destructor called for value: " << value << std::endl;
    }
};

int main() {
    MyStruct obj(42);  // Calls inline constructor and destructor for a struct
    return 0;
}
