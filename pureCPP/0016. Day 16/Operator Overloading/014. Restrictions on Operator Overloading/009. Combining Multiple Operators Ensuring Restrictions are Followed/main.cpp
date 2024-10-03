#include <iostream>
using namespace std;

class SmartPointer {
    int* ptr;
public:
    SmartPointer(int val) {
        ptr = new int(val);
    }

    // Overloading dereference operator *
    int& operator*() {
        return *ptr;
    }

    // Overloading -> operator
    SmartPointer* operator->() {
        return this;
    }

    // Overloading [] for accessing internal array-like behavior
    int operator[](int index) {
        return ptr[index];  // Simulating an array with single element
    }

    ~SmartPointer() {
        delete ptr;
    }
};

int main() {
    SmartPointer sp(10);

    cout << "Dereferencing: " << *sp << endl;  // Output: 10
    cout << "Accessing via ->: " << sp->operator*() << endl;  // Output: 10
    cout << "Using []: " << sp[0] << endl;  // Output: 10

    return 0;
}
