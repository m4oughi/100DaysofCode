#include <iostream>
using namespace std;

int* returnLocalPointer() {
    int x = 100; // local variable
    return &x; // returning address of local variable (dangerous)
}

int main() {
    int* ptr = returnLocalPointer(); // now ptr is a dangling pointer
    cout << "Dangling pointer pointing to local variable: " << *ptr << endl; // Undefined behavior

    return 0;
}
