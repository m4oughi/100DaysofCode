#include <iostream>
using namespace std;

int main() {
    int* ptr = new int(15); // allocate memory

    if (ptr != nullptr) {
        delete ptr; // delete only if not null
        ptr = nullptr; // reset pointer
    }

    if (ptr == nullptr) {
        cout << "Pointer is safely null after deletion." << endl;
    }

    return 0;
}
