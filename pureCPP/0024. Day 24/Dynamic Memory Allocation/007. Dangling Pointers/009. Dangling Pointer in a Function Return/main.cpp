#include <iostream>
using namespace std;

int* createDanglingPointer() {
    int num = 42; // local variable
    return &num;  // returning address of a local variable (dangerous)
}

int main() {
    int* ptr = createDanglingPointer(); // ptr now points to deallocated memory
    cout << "Dangling pointer from function: " << *ptr << endl; // Undefined behavior

    return 0;
}
