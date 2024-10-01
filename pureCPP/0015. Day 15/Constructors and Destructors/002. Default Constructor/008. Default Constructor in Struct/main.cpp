#include <iostream>

struct MyStruct {
    int value;

    // Default constructor
    MyStruct() : value(0) {
        std::cout << "Default constructor called, value = " << value << std::endl;
    }
};

int main() {
    MyStruct obj;  // Calls the default constructor of the struct
    return 0;
}
