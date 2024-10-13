#include <iostream>
using namespace std;

void safeDelete(int*& ptr) {
    if (ptr != nullptr) {
        delete ptr;
        ptr = nullptr; // set to null to avoid double deletion
    }
}

int main() {
    int* ptr = new int(50); // dynamically allocate memory

    safeDelete(ptr); // first deletion
    safeDelete(ptr); // second deletion is safe

    return 0;
}
