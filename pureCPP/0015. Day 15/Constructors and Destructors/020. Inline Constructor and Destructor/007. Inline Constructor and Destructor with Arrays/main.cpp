#include <iostream>

class MyClass {
private:
    int* arr;
    int size;

public:
    // Inline constructor
    MyClass(int s) : size(s), arr(new int[s]) {
        std::cout << "Inline constructor called for array of size: " << size << std::endl;
    }

    // Inline destructor
    ~MyClass() {
        std::cout << "Inline destructor called, deleting array" << std::endl;
        delete[] arr;
    }
};

int main() {
    MyClass obj(5);  // Calls inline constructor and destructor for array handling
    return 0;
}
