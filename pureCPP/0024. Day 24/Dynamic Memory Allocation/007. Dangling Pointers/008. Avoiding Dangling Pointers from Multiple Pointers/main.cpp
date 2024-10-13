#include <iostream>
using namespace std;

int main() {
    int* ptr1 = new int(50); // dynamically allocate memory
    int* ptr2 = ptr1; // both pointers point to the same memory

    delete ptr1; // deallocate memory through ptr1
    ptr1 = nullptr; // avoid dangling pointer

    if (ptr2 != nullptr) {
        cout << "Accessing ptr2 after deallocation (Unsafe): " << *ptr2 << endl; // Still dangerous
    }

    ptr2 = nullptr; // Fix dangling pointer for ptr2 as well
    return 0;
}
