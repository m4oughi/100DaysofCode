#include <iostream>
#include <new>

class MyClass {
public:
    MyClass() {
        try {
            int* data = new int[100000000000];  // Allocate large memory
            std::cout << "Memory allocated successfully for MyClass" << std::endl;
        } catch (const std::bad_alloc& e) {
            std::cout << "Memory allocation failed in MyClass: " << e.what() << std::endl;
        }
    }
};

int main() {
    MyClass obj;
    return 0;
}
