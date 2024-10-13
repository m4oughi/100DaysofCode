#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(30); // allocate memory

    delete ptr; // free memory
    ptr = nullptr; // set pointer to null to avoid double free

    // Attempting to delete again would be safe now
    if (ptr == nullptr) {
        cout << "Pointer is null, safe from double free." << endl;
    }

    return 0;
}
