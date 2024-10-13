#include <iostream>
using namespace std;

int* returnHeapPointer() {
    int* ptr = new int(100); // allocate memory on heap
    return ptr; // return the heap-allocated pointer
}

int main() {
    int* ptr = returnHeapPointer(); // ptr now points to valid memory
    cout << "Valid pointer pointing to heap memory: " << *ptr << endl;

    delete ptr; // proper memory cleanup
    return 0;
}
