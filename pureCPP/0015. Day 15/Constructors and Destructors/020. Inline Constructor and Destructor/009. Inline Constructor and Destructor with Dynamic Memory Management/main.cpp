#include <iostream>

class MyClass {
private:
    int* data;

public:
    // Inline constructor
    MyClass(int size) : data(new int[size]) {
        std::cout << "Inline constructor called, allocated memory for array" << std::endl;
    }

    // Inline destructor
    ~MyClass() {
        std::cout << "Inline destructor called, releasing memory" << std::endl;
        delete[] data;
    }
};

int main() {
    MyClass obj(10);  // Calls inline constructor and destructor with dynamic memory allocation
    return 0;
}
