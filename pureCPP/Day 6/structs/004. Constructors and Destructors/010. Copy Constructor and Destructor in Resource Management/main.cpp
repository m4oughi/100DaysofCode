#include <iostream>

struct SmartPointer {
    int* ptr;

    // Constructor
    SmartPointer(int* p) : ptr(p) {}

    // Copy constructor
    SmartPointer(const SmartPointer& sp) : ptr(new int(*sp.ptr)) {}

    // Destructor
    ~SmartPointer() {
        delete ptr;
    }
};


int main() {


    return 0;
}