#include <iostream>
using namespace std;

int* createSafePointer() {
    int* num = new int(42); // allocate memory on heap
    return num; // return heap-allocated pointer
}

int main() {
    int* ptr = createSafePointer(); // ptr now points to valid memory
    cout << "Valid pointer from function: " << *ptr << endl;

    delete ptr; // proper memory cleanup
    return 0;
}
