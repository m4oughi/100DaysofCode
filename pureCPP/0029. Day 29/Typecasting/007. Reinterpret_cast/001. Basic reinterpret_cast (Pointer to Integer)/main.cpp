#include <iostream>
using namespace std;

int main() {
    int a = 42;
    int* ptr = &a;
    
    // Reinterpret the pointer as an integer
    uintptr_t intValue = reinterpret_cast<uintptr_t>(ptr);
    cout << "Pointer as integer: " << intValue << endl;

    // Convert the integer back to a pointer
    int* newPtr = reinterpret_cast<int*>(intValue);
    cout << "Value via new pointer: " << *newPtr << endl;

    return 0;
}
