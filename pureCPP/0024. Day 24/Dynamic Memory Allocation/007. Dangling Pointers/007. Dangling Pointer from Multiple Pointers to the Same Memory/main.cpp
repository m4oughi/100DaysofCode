#include <iostream>
using namespace std;

int main() {
    int* ptr1 = new int(50); // dynamically allocate memory
    int* ptr2 = ptr1; // both pointers point to the same memory

    delete ptr1; // deallocate memory through ptr1

    cout << "Accessing through ptr2 (Dangling Pointer): " << *ptr2 << endl; // Undefined behavior

    return 0;
}
