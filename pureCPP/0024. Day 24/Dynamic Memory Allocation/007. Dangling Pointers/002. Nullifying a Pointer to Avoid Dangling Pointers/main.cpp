#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(10); // dynamically allocate memory
    cout << "Value: " << *ptr << endl;

    delete ptr; // deallocate memory
    ptr = nullptr; // avoid dangling pointer by setting it to nullptr

    // Now the pointer is safe, and accessing it will not cause undefined behavior
    if (ptr == nullptr) {
        cout << "Pointer is null, safe to use." << endl;
    }

    return 0;
}
