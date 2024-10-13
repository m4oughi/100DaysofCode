#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(10); // dynamically allocate memory
    cout << "Value: " << *ptr << endl;

    delete ptr;  // deallocate memory
    ptr = nullptr; // prevent dangling pointer by setting it to nullptr

    if (ptr == nullptr) {
        cout << "Pointer is safely null." << endl;
    }

    return 0;
}
