#include <iostream>
using namespace std;

int main() {
    int* ptr1 = new int(30); // dynamically allocate memory
    int* ptr2 = ptr1; // ptr2 points to the same memory

    delete ptr1; // first deletion
    ptr1 = nullptr; // set ptr1 to null

    if (ptr2 != nullptr) {
        ptr2 = nullptr; // avoid second deletion by setting ptr2 to null
    }

    return 0;
}
