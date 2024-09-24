#include <iostream>

// Overloaded template function
template <typename T>
void display(T value) {
    std::cout << "Value: " << value << std::endl;
}

// Overloaded for pointers
template <typename T>
void display(T* ptr) {
    if (ptr) {
        std::cout << "Pointer to value: " << *ptr << std::endl;
    } else {
        std::cout << "Null pointer" << std::endl;
    }
}

int main() {
    int x = 42;
    int* p = &x;
    int* nullPtr = nullptr;

    display(10);          // Calls the generic template
    display(p);           // Calls the pointer overload
    display(nullPtr);     // Calls the pointer overload for null pointer

    return 0;
}
