#include <iostream>
using namespace std;

int main() {
    int* ptr = nullptr; // declare a null pointer

    // Check before allocating memory
    if (ptr == nullptr) {
        ptr = new int(42); // allocate memory
        cout << "Pointer assigned value: " << *ptr << endl;
    }

    delete ptr; // free the memory
    return 0;
}
