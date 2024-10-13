#include <iostream>
using namespace std;

int main() {
    int* ptr = nullptr; // pointer is explicitly initialized to null

    // Avoid using the pointer until it's allocated
    if (ptr == nullptr) {
        cout << "Pointer is null and safe to use in checks." << endl;
    }

    return 0;
}
