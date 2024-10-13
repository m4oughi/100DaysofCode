#include <iostream>
using namespace std;

int main() {
    int* ptr = nullptr; // null pointer

    ptr = new int(100); // assign memory
    cout << "Value: " << *ptr << endl;

    delete ptr; // deallocate memory
    ptr = nullptr; // set to null to avoid dangling pointer

    if (ptr == nullptr) {
        cout << "Memory has been safely deallocated." << endl;
    }

    return 0;
}
